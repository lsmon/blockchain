//
// Created by Salomon Lee on 4/30/19.
//

#ifndef BLOCKCHAIN_CHAIN_H
#define BLOCKCHAIN_CHAIN_H

#include <inc/config.h>
#include <block.h>

using namespace std;

class chain {
public:
    chain();

    void add_block(block new_block);
    vector<block> get_chain();
    block get_last_block() const;

private:
    uint32_t _difficulty;
    vector<block> _chain;
};


#endif //BLOCKCHAIN_CHAIN_H
