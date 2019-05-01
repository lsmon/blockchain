//
// Created by Salomon Lee on 4/30/19.
//

#ifndef BLOCKCHAIN_CONFIG_CUH
#define BLOCKCHAIN_CONFIG_CUH

#define CUDA_ENABLED @CUDA_ENABLED@
#define DEBUG_LOG @DEBUG_LOG@

#ifdef __JETBRAINS_IDE__
#define __CUDACC__ 1
#define __host__
#define __device__
#define __global__
#define __forceinline__
#define __shared__
inline void __syncthreads() {}
inline void __threadfence_block() {}
template<class T> inline T __clz(const T val) { return val; }
struct __cuda_fake_struct { int x; int y; int z; };
extern __cuda_fake_struct blockDim;
extern __cuda_fake_struct threadIdx;
extern __cuda_fake_struct blockIdx;
#endif

#ifdef CUDA_ENABLED
#include <iostream>
#include <driver_types.h>
#include <builtin_types.h>
#include <cuda_runtime.h>
#include <cuda_runtime_api.h>
#include <device_launch_parameters.h>
#include <driver_types.h>
//#include <dynlink_cuda.h>
#include <host_defines.h>
#include <vector_types.h>
#include <sha_functions.h>

using namespace std;

template<typename T>
void check(T err, const char* const func, const char* const file, const int line) {
    if (err != cudaSuccess) {
        std::cerr << "CUDA error in: " << file << " at " << func << ":" << line << std::endl;
        exit(1);
    }
}
#endif
#endif //BLOCKCHAIN_CONFIG_CUH
