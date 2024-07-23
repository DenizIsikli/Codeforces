cmake_minimum_required(VERSION 3.15)
project(Codeforces)

set(CMAKE_CXX_STANDARD 20)

# Root
set(ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})
# CPP files in the root directory
file(GLOB ROOT_SOURCES "${ROOT_DIR}/*.cpp")

foreach(ROOT_SOURCE ${ROOT_SOURCES})
    # Filename and add executable
    get_filename_component(EXECUTABLE_NAME ${ROOT_SOURCE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${ROOT_SOURCE}
            template.h)
endforeach()

# Problemsets
set(PROBLEMSETS_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Problemsets)
# Recursively find all CPP files in the Problemsets directory
file(GLOB_RECURSE PROBLEMSETS_SOURCES "${PROBLEMSETS_DIR}/*.cpp")

foreach(PROBLEMSET_SOURCE ${PROBLEMSETS_SOURCES})
    # Filename and add executable
    get_filename_component(EXECUTABLE_NAME ${PROBLEMSET_SOURCE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${PROBLEMSET_SOURCE}
            template.h)
endforeach()
