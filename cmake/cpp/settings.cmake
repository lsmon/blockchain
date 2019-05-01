set(CONFIG_FILES
        ${PROJECT_SOURCE_DIR}/inc/cpp/config.h
        ${PROJECT_BINARY_DIR}/inc/cpp/config.h)

configure_file(${CONFIG_FILES})

message(INFO " -- CONFIG_FILES:                 ${CONFIG_FILES}")