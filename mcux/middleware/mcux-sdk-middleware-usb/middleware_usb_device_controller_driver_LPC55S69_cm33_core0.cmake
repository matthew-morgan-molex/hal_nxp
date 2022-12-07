#Description: USB Device Common Controller; user_visible: True
include_guard(GLOBAL)
message("middleware_usb_device_controller_driver component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/device/usb_device_dci.c
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/device
)

#OR Logic component
if(CONFIG_USE_middleware_usb_device_ip3511hs_LPC55S69_cm33_core0) 
    include(middleware_usb_device_ip3511hs_LPC55S69_cm33_core0)
endif()
if(CONFIG_USE_middleware_usb_device_ip3511fs) 
    include(middleware_usb_device_ip3511fs)
endif()

include(component_osa)
