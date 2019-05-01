#include <iostream>
#include <chain.h>
#include <logger.h>

int main() {
    chain block_chain;
    LOG_INFO << " Hello World";
    block_chain.add_block(block(1, "block 1 Data"));
    block_chain.add_block(block(2, "block 2 Data"));
    block_chain.add_block(block(3, "block 3 Data"));

    return 0;
}