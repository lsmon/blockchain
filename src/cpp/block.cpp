//
// Created by Salomon Lee on 4/30/19.
//

#include <block.h>
#include <logger.h>

block::block(uint32_t nIndexIn, const string &sDataIn) : _next_index(nIndexIn), _data(sDataIn) {
    _next_nonce = 0;
    _time = time(nullptr);
    _hash = _calculate_hash();
}

void block::mine_block(uint32_t difficulty) {
    char cstr[difficulty + 1];
    for (uint32_t i = 0; i < difficulty; ++i) {
        cstr[i] = '0';
    }
    cstr[difficulty] = '\0';

    string str(cstr);

    do {
        _next_nonce++;
        _hash = _calculate_hash();
    }
    while (_hash.substr(0, difficulty) != str);
    LOG_INFO << "block mined: " << _hash;
}

inline string block::_calculate_hash() const {
    stringstream ss;
    ss << _next_index << _previous_hash << _time << _data << _next_nonce;

    return SHA256(ss.str());
}

string block::get_hash() {
    return _hash;
}

string block::get_previous_hash() {
    return _previous_hash;
}

void block::set_previous_hash(string hash) {
    _previous_hash = hash;
}

string block::get_data() {
    return _data;
}

