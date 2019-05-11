#include <iostream>
#include <chain.h>
#include <logger.h>

void displayMessage(){
    LOG_INFO << "IS CUDA ENABLED: " <<  CUDA_ENABLED;
    LOG_INFO << "IS DEBUG ENABLED: " << DEBUG_LOG;
}

int main() {
    displayMessage();
    LOG_INFO << VERSION_MAJOR << "." << VERSION_MINOR << "." << VERSION_PATCH << "." << VERSION_TWEAK;
//    chain block_chain;
//    LOG_TRACE << "creating block 1";
//    block_chain.add_block(block(1, "block 1 Data"));
//    LOG_TRACE << "creating block 2";
//    block_chain.add_block(block(2, "block 2 Data"));
//    LOG_TRACE << "creating block 3";
//    block_chain.add_block(block(3, "block 3 Data"));
//
//    for(std::vector<block>::iterator it = block_chain.get_chain().begin(); it != block_chain.get_chain().end(); ++it) {
//        LOG_TRACE << "block data: " << it->get_data() << " block hash: " << it->get_hash() << " previous hash: " << it->get_previous_hash();
//    }
    return 0;
}