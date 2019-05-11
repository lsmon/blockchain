//
// Created by Salomon Lee on 4/30/19.
//

#ifndef BLOCKCHAIN_BLOCK_CONFIG_H
#define BLOCKCHAIN_BLOCK_CONFIG_H
#define VERSION_MAJOR @PROJECT_VERSION_MAJOR@
#define VERSION_MINOR @PROJECT_VERSION_MINOR@
#define VERSION_PATCH @PROJECT_VERSION_PATCH@
#define VERSION_TWEAK @PROJECT_VERSION_TWEAK@
#define VERSION "@PROJECT_VERSION_MAJOR@.@PROJECT_VERSION_MINOR@.@PROJECT_VERSION_PATCH@.@PROJECT_VERSION_TWEAK@"

#include <algorithm>
#include <bitset>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <map>
#include <math.h>
#include <set>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include <sstream>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <vector>
#include <sha_functions.h>

#define CUDA_ENABLED @CUDA_ENABLED@
#define DEBUG_LOG @DEBUG_LOG@

#ifndef CUDA_ENABLED
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

#include <driver_types.h>
#include <builtin_types.h>
#include <cuda_runtime.h>
#include <cuda_runtime_api.h>
#include <device_launch_parameters.h>
#include <driver_types.h>
#include <host_defines.h>
#include <vector_types.h>

template<typename T>
void check(T err, const char* const func, const char* const file, const int line) {
    if (err != cudaSuccess) {
        std::cerr << "CUDA error in: " << file << " at " << func << ":" << line << std::endl;
        exit(1);
    }
}
#endif

using namespace std;

template <typename T>
string to_string(T value) {
    stringstream ss;
    ss << value;
    return ss.str();
}

#endif //PROJECT_CONFIG_H
