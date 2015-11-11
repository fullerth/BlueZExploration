set(TEST_RFCOMM_SOURCES
    main.cxx
    testRfcommSocket.cxx
)

add_executable(testRfcommSocket ${TEST_RFCOMM_SOURCES})

target_link_libraries(testRfcommSocket
    rfcommSocket 
    gtest
)

include_directories(
    "../../lib/gtest/include/"
    "../../rfcommSocket/include/"
)

