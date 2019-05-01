set(CPP_INC_PATH ${PROJECT_SOURCE_DIR}/inc/cpp)
set(CPP_SRC_PATH ${PROJECT_SOURCE_DIR}/src/cpp)

set(CPP_BLOCKCHAIN_INC
        ${CPP_INC_PATH}/block.h
        ${CPP_INC_PATH}/chain.h
        ${CPP_INC_PATH}/sha256.h)

set(CPP_BLOCKCHAIN_SRC
        ${CPP_SRC_PATH}/block.cpp
        ${CPP_SRC_PATH}/chain.cpp
        ${CPP_SRC_PATH}/sha256.cpp)

include_directories(CPP_DIRECTORIES
        ${CPP_INC_PATH}
        ${CPP_SRC_PATH}
        ${PROJECT_BINARY_DIR})

link_directories(${CPP_DIRECTORIES})

set(CUDA_ENABLED false)
message(INFO " -- CUDA:                         NOT FOUND")
message(INFO " -- DEBUGGING LOGS:               ${DEBUG_LOG}")
message(INFO " -- CUDA_ENABLED:                 ${CUDA_ENABLED}")
message(INFO " -- CPP_BLOCKCHAIN_SRC:           ${CPP_BLOCKCHAIN_SRC}")
message(INFO " -- CPP_BLOCKCHAIN_INC:           ${CPP_BLOCKCHAIN_INC}")
