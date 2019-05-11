set(COMMON_INC_PATH ${PROJECT_SOURCE_DIR}/inc/common)
set(COMMON_SRC_PATH ${PROJECT_SOURCE_DIR}/src/common)

set(COMMON_INC ${COMMON_INC_PATH}/logger.h ${COMMON_INC_PATH}/sha_functions.h)
set(COMMON_SRC ${COMMON_SRC_PATH}/logger.cpp)

set(CONFIG_FILES
        ${PROJECT_SOURCE_DIR}/inc/cpp/config.h
        ${PROJECT_BINARY_DIR}/inc/cpp/config.h)

configure_file(${CONFIG_FILES})

include_directories(COMMON_DIRECTORIES
        ${COMMON_INC_PATH}
        ${COMMON_SRC_PATH}
        ${PROJECT_BINARY_DIR})

link_directories(${COMMON_DIRECTORIES})

message(INFO " -- CONFIG_FILES:                 ${CONFIG_FILES}")
message(INFO " -- COMMON_INC:                   ${COMMON_INC}")
message(INFO " -- COMMON_SRC:                   ${COMMON_SRC}")