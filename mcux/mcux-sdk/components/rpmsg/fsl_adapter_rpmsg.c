/*
 * Copyright 2020 NXP
 * All rights reserved.
 *
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_common.h"
#include "rpmsg_lite.h"

#include "fsl_adapter_rpmsg.h"
#include "mcmgr.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

typedef struct _hal_rpmsg_rx_state
{
    rpmsg_rx_callback_t callback;
    void *param;
} hal_rpmsg_rx_state_t;

/*! @brief rpmsg state structure. */
typedef struct _hal_rpmsg_state
{
    uint32_t local_addr;
    uint32_t remote_addr;
    struct rpmsg_lite_ept_static_context endpoint;
    struct rpmsg_lite_endpoint *pEndpoint;
    hal_rpmsg_rx_state_t rx;
} hal_rpmsg_state_t;

#if (defined(HAL_RPMSG_SELECT_ROLE) && (HAL_RPMSG_SELECT_ROLE == 0U))
#define SH_MEM_TOTAL_SIZE (6144U)
#if defined(__ICCARM__) /* IAR Workbench */
#pragma location = "rpmsg_sh_mem_section"
static char rpmsg_lite_base[SH_MEM_TOTAL_SIZE];
#elif defined(__CC_ARM) || defined(__ARMCC_VERSION) /* Keil MDK */
static char rpmsg_lite_base[SH_MEM_TOTAL_SIZE] __attribute__((section("rpmsg_sh_mem_section")));
#elif defined(__GNUC__)
static char rpmsg_lite_base[SH_MEM_TOTAL_SIZE] __attribute__((section(".noinit.$rpmsg_sh_mem")));
#else
#error "RPMsg: Please provide your definition of rpmsg_lite_base[]!"
#endif
#endif /* HAL_RPMSG_SELECT_ROLE */

extern uint32_t rpmsg_sh_mem_start[];
extern uint32_t rpmsg_sh_mem_end[];

#define RPMSG_LITE_LINK_ID (0U)

#define APP_RPMSG_COREUP_EVENT_DATA   (0U)
#define APP_RPMSG_READY_EVENT_DATA    (1U)
#define APP_RPMSG_EP_READY_EVENT_DATA (2U)

static int32_t s_rpmsgEptCount                        = -1;
static struct rpmsg_lite_instance *s_rpmsgContext     = NULL;
static struct rpmsg_lite_instance s_context           = {0};
static volatile uint16_t s_rpmsgEptData[MAX_EP_COUNT] = {0};
static uint8_t s_rpmsg_init_golbal                    = 0U;

/*******************************************************************************
 * Code
 ******************************************************************************/
#if 0  /* Reserved API */
static uint16_t rpmsg_lite_recv_ack_flag;

void rpmsg_ack_init(void)
{
    rpmsg_lite_recv_ack_flag = 0U;
    (void)MCMGR_RegisterEvent(kMCMGR_RemoteApplicationEvent, RPMsgPeerReadyEventHandler,
                              (void *)&rpmsg_lite_recv_ack_flag);
}

void rpmsg_recv_ack(void)
{
    (void)MCMGR_TriggerEvent(kMCMGR_RemoteApplicationEvent, 1U);
}

void rpmsg_wait_ack(void)
{
    while (1U != rpmsg_lite_recv_ack_flag)
        ;
}
#endif /* Reserved API */

static int32_t rpmsg_ept_read_cb(void *payload, uint32_t payload_len, uint32_t src, void *priv)
{
    hal_rpmsg_state_t *rpmsgHandle;

    rpmsgHandle = (hal_rpmsg_state_t *)priv;
    assert(NULL != rpmsgHandle->rx.callback);

    return rpmsgHandle->rx.callback(rpmsgHandle->rx.param, payload, payload_len);
}

#if (defined(HAL_RPMSG_SELECT_ROLE) && (HAL_RPMSG_SELECT_ROLE == 0U))
static void RPMsgPeerReadyEventHandler(uint16_t eventData, void *context)
{
    uint16_t *data = (uint16_t *)context;

    if ((eventData & 0xff00U) == APP_RPMSG_EP_READY_EVENT_DATA << 0x8U)
    {
        s_rpmsgEptData[(eventData & 0xffU)] = APP_RPMSG_EP_READY_EVENT_DATA;
    }

    *data = eventData;
}
static hal_rpmsg_status_t HAL_RpmsgMcmgrMasterInit(void)
{
    static volatile uint16_t RPMsgRemoteReadyEventData = 0;

    if (0 > s_rpmsgEptCount)
    {
        if (0U == s_rpmsg_init_golbal)
        {
            s_rpmsg_init_golbal = 1U;
            (void)MCMGR_RegisterEvent(kMCMGR_RemoteApplicationEvent, RPMsgPeerReadyEventHandler,
                                      (void *)&RPMsgRemoteReadyEventData);
            (void)MCMGR_Init();
            (void)MCMGR_StartCore(kMCMGR_Core1, (void *)(char *)REMOTE_CORE_BOOT_ADDRESS, 2, kMCMGR_Start_Synchronous);
        }

        while (APP_RPMSG_READY_EVENT_DATA != RPMsgRemoteReadyEventData)
        {
        };
        RPMsgRemoteReadyEventData = 0;

        /* Master init */
        s_rpmsgContext = rpmsg_lite_master_init((void *)rpmsg_lite_base, SH_MEM_TOTAL_SIZE, RPMSG_LITE_LINK_ID,
                                                RL_NO_FLAGS, &s_context);

        if (RL_NULL == s_rpmsgContext)
        {
            return kStatus_HAL_RpmsgError;
        }

        s_rpmsgEptCount = 0;
    }

    return kStatus_HAL_RpmsgSuccess;
}
static hal_rpmsg_status_t HAL_RpmsgMasterInit(hal_rpmsg_handle_t handle, hal_rpmsg_config_t *config)
{
    hal_rpmsg_state_t *rpmsgHandle;
    rpmsgHandle = (hal_rpmsg_state_t *)handle;

    rpmsgHandle->local_addr  = config->local_addr;
    rpmsgHandle->remote_addr = config->remote_addr;

    rpmsgHandle->rx.callback = NULL;
    rpmsgHandle->rx.param    = NULL;

    rpmsgHandle->pEndpoint = rpmsg_lite_create_ept(s_rpmsgContext, rpmsgHandle->local_addr, rpmsg_ept_read_cb,
                                                   rpmsgHandle, &rpmsgHandle->endpoint);

    if (RL_NULL == rpmsgHandle->pEndpoint)
    {
        return kStatus_HAL_RpmsgError;
    }

    return kStatus_HAL_RpmsgSuccess;
}
#endif /* HAL_RPMSG_SELECT_ROLE */

#if (defined(HAL_RPMSG_SELECT_ROLE) && (HAL_RPMSG_SELECT_ROLE == 1U))
static hal_rpmsg_status_t HAL_RpmsgMcmgrRemoteInit()
{
    uint32_t startupData;
    mcmgr_status_t status;
    volatile static uint16_t RPMsgRemoteReadyEventData = 0;

    if (0 > s_rpmsgEptCount)
    {
        if (0U == s_rpmsg_init_golbal)
        {
            s_rpmsg_init_golbal = 1U;
            (void)MCMGR_Init();
            do
            {
                status = MCMGR_GetStartupData(&startupData);
            } while (status != kStatus_MCMGR_Success);
        }

        s_rpmsgContext =
            rpmsg_lite_remote_init((void *)(char *)rpmsg_sh_mem_start, RPMSG_LITE_LINK_ID, RL_NO_FLAGS, &s_context);

        if (RL_NULL == s_rpmsgContext)
        {
            return kStatus_HAL_RpmsgError;
        }

        /* Trigger event notify master */
        (void)MCMGR_TriggerEvent(kMCMGR_RemoteApplicationEvent, APP_RPMSG_READY_EVENT_DATA);
        do
        {
        } while (RL_TRUE != rpmsg_lite_is_link_up(s_rpmsgContext));

        /* rpmsg initialized */
        s_rpmsgEptCount = 0;
    }
    return kStatus_HAL_RpmsgSuccess;
}
static hal_rpmsg_status_t HAL_RpmsgRemoteInit(hal_rpmsg_handle_t handle, hal_rpmsg_config_t *config)
{
    hal_rpmsg_state_t *rpmsgHandle;

    rpmsgHandle = (hal_rpmsg_state_t *)handle;

    /* Set local/remote addr */
    rpmsgHandle->local_addr  = config->local_addr;
    rpmsgHandle->remote_addr = config->remote_addr;

    rpmsgHandle->rx.callback = NULL;
    rpmsgHandle->rx.param    = NULL;

    rpmsgHandle->pEndpoint = rpmsg_lite_create_ept(s_rpmsgContext, rpmsgHandle->local_addr, rpmsg_ept_read_cb,
                                                   rpmsgHandle, &rpmsgHandle->endpoint);

    if (RL_NULL == rpmsgHandle->pEndpoint)
    {
        return kStatus_HAL_RpmsgError;
    }

    return kStatus_HAL_RpmsgSuccess;
}
#endif /* HAL_RPMSG_SELECT_ROLE */

hal_rpmsg_status_t HAL_RpmsgMcmgrInit(void)
{
    hal_rpmsg_status_t state;
    if (0U == s_rpmsg_init_golbal)
    {
        (void)MCMGR_EarlyInit();
    }

#if (defined(HAL_RPMSG_SELECT_ROLE) && (HAL_RPMSG_SELECT_ROLE == 0U))
    state = HAL_RpmsgMcmgrMasterInit();
#elif (defined(HAL_RPMSG_SELECT_ROLE) && (HAL_RPMSG_SELECT_ROLE == 1U))
    state = HAL_RpmsgMcmgrRemoteInit();
#endif /* HAL_RPMSG_SELECT_ROLE */

    return state;
}
hal_rpmsg_status_t HAL_RpmsgInit(hal_rpmsg_handle_t handle, hal_rpmsg_config_t *config)
{
    hal_rpmsg_status_t state;
    hal_rpmsg_state_t *rpmsgHandle;

    assert(HAL_RPMSG_HANDLE_SIZE >= sizeof(hal_rpmsg_state_t));
    assert(NULL != handle);
    rpmsgHandle = (hal_rpmsg_state_t *)handle;

#if (defined(HAL_RPMSG_SELECT_ROLE) && (HAL_RPMSG_SELECT_ROLE == 0U))
    state = HAL_RpmsgMasterInit(handle, config);
#elif (defined(HAL_RPMSG_SELECT_ROLE) && (HAL_RPMSG_SELECT_ROLE == 1U))
    state = HAL_RpmsgRemoteInit(handle, config);
#endif /* HAL_RPMSG_SELECT_ROLE */
    rpmsgHandle->rx.callback = config->callback;
    rpmsgHandle->rx.param    = config->param;
    return state;
}

hal_rpmsg_status_t HAL_RpmsgDeinit(hal_rpmsg_handle_t handle)
{
    hal_rpmsg_state_t *rpmsgHandle;

    rpmsgHandle = (hal_rpmsg_state_t *)handle;

    if (s_rpmsgEptCount > 0)
    {
        (void)rpmsg_lite_destroy_ept(s_rpmsgContext, rpmsgHandle->pEndpoint);
        s_rpmsgEptCount--;
    }

    if (0 == s_rpmsgEptCount)
    {
        s_rpmsgEptCount = -1;
        (void)rpmsg_lite_deinit(s_rpmsgContext);
        for (int i = 0; i < MAX_EP_COUNT; i++)
        {
            s_rpmsgEptData[i] = 0U;
        }
    }

    return kStatus_HAL_RpmsgSuccess;
}

hal_rpmsg_status_t HAL_RpmsgSend(hal_rpmsg_handle_t handle, uint8_t *data, uint32_t length)
{
    hal_rpmsg_state_t *rpmsgHandle;
    hal_rpmsg_status_t status = kStatus_HAL_RpmsgSuccess;
    uint32_t primask;

    assert(NULL != data);

    rpmsgHandle = (hal_rpmsg_state_t *)handle;

    primask = DisableGlobalIRQ();

    do
    {
        if (RL_TRUE != rpmsg_lite_is_link_up(s_rpmsgContext))
        {
            status = kStatus_HAL_RpmsgError;
            break;
        }

        if (RL_SUCCESS != rpmsg_lite_send(s_rpmsgContext, rpmsgHandle->pEndpoint, rpmsgHandle->remote_addr,
                                          (char *)data, length, RL_BLOCK))
        {
            status = kStatus_HAL_RpmsgError;
            break;
        }
    } while (false);

    EnableGlobalIRQ(primask);

    return status;
}

void *HAL_RpmsgAllocTxBuffer(hal_rpmsg_handle_t handle, uint32_t size)
{
    void *buf = NULL;
    uint32_t primask;
    primask = DisableGlobalIRQ();
    buf     = rpmsg_lite_alloc_tx_buffer(s_rpmsgContext, &size, RL_BLOCK);
    EnableGlobalIRQ(primask);
    return buf;
}

hal_rpmsg_status_t HAL_RpmsgFreeRxBuffer(hal_rpmsg_handle_t handle, uint8_t *data)
{
    hal_rpmsg_status_t status = kStatus_HAL_RpmsgSuccess;
    uint32_t primask;
    primask = DisableGlobalIRQ();
    if (RL_SUCCESS != rpmsg_lite_release_rx_buffer(s_rpmsgContext, data))
    {
        status = kStatus_HAL_RpmsgError;
    }
    EnableGlobalIRQ(primask);
    return status;
}

hal_rpmsg_status_t HAL_RpmsgNoCopySend(hal_rpmsg_handle_t handle, uint8_t *data, uint32_t length)
{
    hal_rpmsg_state_t *rpmsgHandle;
    hal_rpmsg_status_t status = kStatus_HAL_RpmsgSuccess;
    uint32_t primask;

    primask = DisableGlobalIRQ();
    assert(NULL != data);

    rpmsgHandle = (hal_rpmsg_state_t *)handle;

    do
    {
        if (RL_TRUE != rpmsg_lite_is_link_up(s_rpmsgContext))
        {
            status = kStatus_HAL_RpmsgError;
            break;
        }

        if (RL_SUCCESS != rpmsg_lite_send_nocopy(s_rpmsgContext, rpmsgHandle->pEndpoint, rpmsgHandle->remote_addr,
                                                 (char *)data, length))
        {
            status = kStatus_HAL_RpmsgError;
            break;
        }
    } while (false);

    EnableGlobalIRQ(primask);

    return status;
}
hal_rpmsg_status_t HAL_RpmsgInstallRxCallback(hal_rpmsg_handle_t handle, rpmsg_rx_callback_t callback, void *param)
{
    hal_rpmsg_state_t *rpmsgHandle;

    rpmsgHandle = (hal_rpmsg_state_t *)handle;

    rpmsgHandle->rx.callback = callback;
    rpmsgHandle->rx.param    = param;
#if (defined(HAL_RPMSG_SELECT_ROLE) && (HAL_RPMSG_SELECT_ROLE == 0U))
    /* Wait for remote side endpoint initialize completed and install the RX call back. */
    while ((APP_RPMSG_EP_READY_EVENT_DATA) != s_rpmsgEptData[s_rpmsgEptCount])
    {
    };
    s_rpmsgEptData[s_rpmsgEptCount] = 0U;

    /* Create end point success! */
    s_rpmsgEptCount++;
#elif (defined(HAL_RPMSG_SELECT_ROLE) && (HAL_RPMSG_SELECT_ROLE == 1U))
    (void)MCMGR_TriggerEvent(kMCMGR_RemoteApplicationEvent, APP_RPMSG_EP_READY_EVENT_DATA << 0x8U | s_rpmsgEptCount);

    /* Create end point success! */
    s_rpmsgEptCount++;
#endif /* HAL_RPMSG_SELECT_ROLE */
    return kStatus_HAL_RpmsgSuccess;
}

hal_rpmsg_status_t HAL_RpmsgEnterLowpower(hal_rpmsg_handle_t handle)
{
    return kStatus_HAL_RpmsgError;
}

hal_rpmsg_status_t HAL_RpmsgExitLowpower(hal_rpmsg_handle_t handle)
{
    return kStatus_HAL_RpmsgError;
}
