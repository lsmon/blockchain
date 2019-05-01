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

using namespace std;

template <typename T>
string to_string(T value) {
    stringstream ss;
    ss << value;
    return ss.str();
}

#define CUDA_ENABLED @CUDA_ENABLED@
#define DEBUG_LOG @DEBUG_LOG@

#ifdef CUDA_ENABLED
#include <inc/cuda/config.h>
#endif

#endif //PROJECT_CONFIG_H
