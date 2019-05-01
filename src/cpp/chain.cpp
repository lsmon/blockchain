//
// Created by Salomon Lee on 4/30/19.
//

#include <chain.h>

chain::chain() {
    _chain.emplace_back(block(0, "Genesis block"));
    _difficulty = 6;
}

void chain::add_block(block new_block) {
    new_block.set_previous_hash(get_last_block().get_hash());
    new_block.mine_block(_difficulty);
    _chain.push_back(new_block);
}

block chain::get_last_block() const {
    return _chain.back();
}

vector<block> chain::get_chain() {
    return _chain;
}