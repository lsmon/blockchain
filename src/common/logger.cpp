//
// Created by Salomon Lee on 5/1/19.
//

#include <logger.h>

info::info(const string &function_name) {
    cout << _to_string(log_info) << " - " << _now_time() << "[" << function_name << "]: ";
}
info::~info() { cout << endl; }

trace::trace(const string &function_name) {
    cout << _to_string(log_trace) << " - " << _now_time() << "[" << function_name << "]: ";
}
trace::~trace() { cout << endl; }

error::error(const string &function_name) {
    cerr << _to_string(log_error) << " - " << _now_time() << "[" << function_name << "]: ";
}
error::~error() { cerr << endl; }

debug::debug(const string &function_name) {
    cout << _to_string(log_debug) << " - " << _now_time() << "[" << function_name << "]: ";
}
debug::~debug() { cout << endl; }

string _to_string(level l) {
    string level;
    switch(l) {
        case log_info:
            level = "INFO";
            break;
        case log_trace:
            level = "TRACE";
            break;
        case log_error:
            level = "ERROR";
            break;
        case log_debug:
            level = "DEBUG";
            break;
        default:
            level = "UNDEFINED";
            break;
    }
    return level;
}

string _now_time() {
    stringstream ss;
    time_t t = time(0);   // get time now
    tm* now = localtime(&t);
    ss << (now->tm_year + 1900) << '-'
       << (now->tm_mon + 1) << '-'
       <<  now->tm_mday
       << "_" << now->tm_hour
       << ":" << now->tm_min
       << ":" << now->tm_sec << " ";
    return ss.str();
}