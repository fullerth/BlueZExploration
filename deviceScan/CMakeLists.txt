set(DEVICE_SCAN_SOURCES
    deviceScan.cxx)

include_directories(
    "include"
)

add_library(deviceScan
    ${DEVICE_SCAN_SOURCES}
)
