## CMakeLists.txt
cmake_minimum_required(VERSION 2.8.7)
project(BlueZTest)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_subdirectory(main)
add_subdirectory(test/testfoo)
add_subdirectory(libfoo)
add_subdirectory(lib/gtest)

include_directories(
    "lib/gmock/include"
)

#Gmock Setup
set(MAIN_SOURCES
    main/main.cxx)

add_executable(BlueZTest
    ${MAIN_SOURCES}
	       )

target_link_libraries(BlueZTest bluetooth)

