#Description: USB Host Video; user_visible: True
include_guard(GLOBAL)
message("middleware_usb_host_video component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/host/class/usb_host_video.c
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/host/class
)

#OR Logic component
if(${MCUX_DEVICE} STREQUAL "MIMXRT1166_cm7")
    include(middleware_usb_host_stack_MIMXRT1166_cm7)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1052")
    include(middleware_usb_host_stack_MIMXRT1052)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1064")
    include(middleware_usb_host_stack_MIMXRT1064)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1062")
    include(middleware_usb_host_stack_MIMXRT1062)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54S018")
    include(middleware_usb_host_stack_LPC54S018)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1176_cm7")
    include(middleware_usb_host_stack_MIMXRT1176_cm7)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54S018M")
    include(middleware_usb_host_stack_LPC54S018M)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC55S69_cm33_core0")
    include(middleware_usb_host_stack_LPC55S69_cm33_core0)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC55S28")
    include(middleware_usb_host_stack_LPC55S28)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT685S_cm33")
    include(middleware_usb_host_stack_MIMXRT685S_cm33)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT595S_cm33")
    include(middleware_usb_host_stack_MIMXRT595S_cm33)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1021")
    include(middleware_usb_host_stack_MIMXRT1021)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1024")
    include(middleware_usb_host_stack_MIMXRT1024)
endif()

