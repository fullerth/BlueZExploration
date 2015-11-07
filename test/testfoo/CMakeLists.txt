set(TEST_FOO_SOURCES
    main.cxx)

add_executable(testfoo ${TEST_FOO_SOURCES})

target_link_libraries(testfoo
    libfoo
    ${GTEST_LIBRARIES}
    ${GMOCK_LIBRARIES}
)

install(TARGETS testfoo DESTINATION bin)
