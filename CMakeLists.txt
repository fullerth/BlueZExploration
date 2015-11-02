## CMakeLists.txt
cmake_minimum_required(VERSION 2.8.7)
project(BlueZTest)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_subdirectory(lib/gmock)
add_subdirectory(main)

#Gmock Setup
set(MAIN_SOURCES
    main/main.cxx)

add_executable(BlueZTest
    ${MAIN_SOURCES}
	       )
