set(RFCOMM_SOCKET_SOURCES
    rfcommSocket.cxx)

include_directories(
    "include"
)

add_library(rfcommSocket
    ${RFCOMM_SOCKET_SOURCES}
)
