cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)

set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 1)
set(PROJECT_VERSION_PATCH 0)
set(PROJECT_VERSION_TWEAK 0)

set(DEBUG_LOG false)


find_package(CUDA)

if(CUDA_FOUND)
    set(CUDA_ENABLED true)
else()
    set(CUDA_ENABLED false)
endif()

set(CONFIG_FILES
        ${PROJECT_SOURCE_DIR}/inc/config.h.in
        ${PROJECT_BINARY_DIR}/inc/config.h @ONLY)

configure_file(${CONFIG_FILES})

include(cmake/cpp/source.cmake)
include(cmake/common/settings.cmake)


if (CUDA_FOUND)
    message(INFO " -- CUDA_ENABLED:                 ${CUDA_ENABLED}")

    include(cmake/cuda/settings.cmake)
    include(cmake/cuda/source.cmake)
    add_executable(${PROJECT_NAME}
            ${COMMON_INC}
            ${COMMON_SRC}
            ${CPP_BLOCKCHAIN_INC}
            ${CPP_BLOCKCHAIN_SRC}
            main.cpp)
else (CUDA_FOUND)
    message(INFO " -- CUDA_ENABLED:                 ${CUDA_ENABLED}")
    add_executable(${PROJECT_NAME}
            ${COMMON_INC}
            ${COMMON_SRC}
            ${CPP_BLOCKCHAIN_INC}
            ${CPP_BLOCKCHAIN_SRC}
            main.cpp)
endif ()


