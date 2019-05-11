//
// Created by Salomon Lee on 4/30/19.
//

#ifndef BLOCKCHAIN_BLOCK_H
#define BLOCKCHAIN_BLOCK_H

#include <inc/config.h>
#include <sha256.h>

using namespace std;

class block {
public:
    block(uint32_t index, const string &data);
    string  get_hash();

    void    mine_block(uint32_t difficulty);
    string  get_previous_hash();
    void    set_previous_hash(string hash);
    string  get_data();


private:
    uint32_t    _next_index;
    int64_t     _next_nonce;
    string      _data;
    string      _hash;
    time_t      _time;
    string      _previous_hash;

    string      _calculate_hash() const;
};


#endif //BLOCKCHAIN_BLOCK_H
