//
// Created by Salomon Lee on 5/1/19.
//

#ifndef BLOCKCHAIN_SHA256_CUH
#define BLOCKCHAIN_SHA256_CUH

#include <config.cuh>

string SHA256(string input);

class sha256 {
public:
    void init();
    void update(const uint8 *message, uint32 len);
    void final(uint8 *digest);

protected:
    void transform(const unsigned char *message, unsigned int block_nb);
    unsigned int m_tot_len;
    unsigned int m_len;
    unsigned char m_block[2*SHA224_256_BLOCK_SIZE];
    uint32 m_h[8];
};

#endif //BLOCKCHAIN_SHA256_CUH
