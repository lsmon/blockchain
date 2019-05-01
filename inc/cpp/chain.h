//
// Created by Salomon Lee on 4/30/19.
//

#ifndef BLOCKCHAIN_CHAIN_H
#define BLOCKCHAIN_CHAIN_H

#include <config.h>
#include <block.h>

using namespace std;

class chain {
public:
    chain();

    void add_block(block new_block);

private:
    uint32_t _difficulty;
    vector<block> _chain;

    block _get_last_block() const;
};


#endif //BLOCKCHAIN_CHAIN_H
