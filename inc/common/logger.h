//
// Created by Salomon Lee on 4/30/19.
//

#ifndef BLOCKCHAIN_LOGGER_H
#define BLOCKCHAIN_LOGGER_H

#include <config.h>

#define DEBUG_LOG @DEBUG_LOG@

enum level {
    log_info,
    log_trace,
    log_error,
    log_debug
};

string _to_string(level);
string _now_time();

class info {
public:
    info(const std::string &funcName);
    template <class T> info &operator<<(const T &v) {
        cout << v;
        return *this;
    }
    ~info();
};

class trace {
public:
    trace(const std::string &funcName);
    template <class T> trace &operator<<(const T &v) {
        cout << v;
        return *this;
    }
    ~trace();
};

class error {
public:
    error(const std::string &funcName);
    template <class T> error &operator<<(const T &v) {
        cerr << v;
        return *this;
    }
    ~error();
};

class debug {
public:
    debug(const std::string &funcName);
    template <class T> debug &operator<<(const T &v) {
        cout << v;
        return *this;
    }
    ~debug();
};

#define LOG_INFO info(__PRETTY_FUNCTION__)
#define LOG_TRACE trace(__PRETTY_FUNCTION__)
#define LOG_ERROR error(__PRETTY_FUNCTION__)
#define LOG_DEBUG debug(__PRETTY_FUNCTION__)

#endif //PROJECT_LOGGER_H
