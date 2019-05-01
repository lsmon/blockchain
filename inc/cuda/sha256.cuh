//
// Created by Salomon Lee on 5/1/19.
//

#ifndef BLOCKCHAIN_SHA256_CUH
#define BLOCKCHAIN_SHA256_CUH

#include <config.cuh>

class sha256 {
protected:
    typedef unsigned char uint8;
    typedef unsigned int uint32;
    typedef unsigned long long uint64;

    static const unsigned int SHA224_256_BLOCK_SIZE = (512/8);
public:
    void init();
    void update(const unsigned char *message, unsigned int len);
    void final(unsigned char *digest);
    static const unsigned int DIGEST_SIZE = ( 256 / 8);

protected:
    void transform(const unsigned char *message, unsigned int block_nb);
    unsigned int m_tot_len;
    unsigned int m_len;
    unsigned char m_block[2*SHA224_256_BLOCK_SIZE];
    uint32 m_h[8];
};

#endif //BLOCKCHAIN_SHA256_CUH
