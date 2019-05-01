#include <iostream>
#include <chain.h>
#include <logger.h>

int main() {
    chain block_chain;
    LOG_TRACE << "creating block 1";
    block_chain.add_block(block(1, "block 1 Data"));
    LOG_TRACE << "creating block 2";
    block_chain.add_block(block(2, "block 2 Data"));
    LOG_TRACE << "creating block 3";
    block_chain.add_block(block(3, "block 3 Data"));

    for(std::vector<block>::iterator it = block_chain.get_chain().begin(); it != block_chain.get_chain().end(); ++it) {
        LOG_TRACE << "block data: " << it->get_data() << " block hash: " << it->get_hash() << " previous hash: " << it->get_previous_hash();
    }
    return 0;
}