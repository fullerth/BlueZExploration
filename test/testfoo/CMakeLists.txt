set(TEST_FOO_SOURCES
    main.cxx)

add_executable(testfoo ${TEST_FOO_SOURCES})

target_link_libraries(testfoo
    libfoo
    gtest
)

include_directories(
    "../../lib/gtest/include/"
)

install(TARGETS testfoo DESTINATION bin)
