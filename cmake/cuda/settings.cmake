include(FindCUDA)

set(CUDA_CONFIG_CUH
        ${PROJECT_SOURCE_DIR}/inc/cuda/config.cuh
        ${PROJECT_BINARY_DIR}/inc/cuda/config.cuh)

configure_file(${CUDA_CONFIG_CUH})

set(CUDA_NVCC_FLAGS ${CUDA_NVCC_FLAGS}
        -gencode arch=compute_30,code=sm_30
        -gencode arch=compute_35,code=sm_35
        -gencode arch=compute_50,code=sm_50
        -gencode arch=compute_50,code=compute_50
        -rdc=true)

set(NVENC_LIBS /usr/lib/nvidia-387 /usr/lib/nvidia-390)
set(CUDA_TOOLKIT /usr/local/cuda)
set(CUDA_LIBS ${CUDA_TOOLKIT}/lib64)
set(CUDA_SAMPLES_INC ${CUDA_TOOLKIT}/samples/common/inc/)
set(CUDA_SEPARABLE_COMPILATION ON)

message(INFO " -- CUDA:                         FOUND")
message(INFO " -- CUDA VERSION:                 ${CUDA_VERSION}")
message(INFO " -- DEBUGGING LOGS:               ${DEBUG_LOG}")
message(INFO " -- CUDA_ENABLED:                 ${CUDA_ENABLED}")
message(INFO " -- CUDA CONFIG HEADER:           ${CUDA_CONFIG_CUH}")
message(INFO " -- NVENC LIBRARY:                ${NVENC_LIBS}")
message(INFO " -- CUDA TOOLKIT:                 ${CUDA_TOOLKIT}")
message(INFO " -- CUDA LIBRARY:                 ${CUDA_LIBS}")
message(INFO " -- CUDA SAMPLES INC:             ${CUDA_SAMPLES_INC}")
message(INFO " -- CUDA SEPARABLE COMPILATION    ${CUDA_SEPARABLE_COMPILATION}")
