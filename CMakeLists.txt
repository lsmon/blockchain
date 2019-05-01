cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)

set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 1)
set(PROJECT_VERSION_PATCH 0)
set(PROJECT_VERSION_TWEAK 0)

include(cmake/common/settings.cmake)

find_package(CUDA)

set(DEBUG_LOG true)
set(CUDA_ENABLED true)

if (CUDA_FOUND)
        include(cmake/cuda/settings.cmake)
        include(cmake/cuda/source.cmake)
else (CUDA_FOUND)
        include(cmake/cpp/source.cmake)
        include(cmake/cpp/settings.cmake)
        add_executable(blockchain
                ${COMMON_INC}
                ${COMMON_SRC}
                ${CPP_BLOCKCHAIN_INC}
                ${CPP_BLOCKCHAIN_SRC}
                ${CPP_SRC_PATH}/main.cpp)
endif (CUDA_FOUND)


