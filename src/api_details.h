#pragma once

#include "json.hpp"
#include <iostream>
#include <string>
#include <vector>

using json = nlohmann::json;
extern bool AUTH_SENT;
extern std::vector<std::string> SUPPORTED_CURRENCIES;

// jsonrpc : It defines a standard structure for requests and responses between a client and a server.
// The jsonrpc class is a custom wrapper around the nlohmann::json class
class jsonrpc : public json
{
public:
    // Default Constructor for Jsonrpc
    jsonrpc()
    {
        (*this)["jsonrpc"] = "2.0",

        srand(time(NULL));
        long number = rand();
        (*this)["id"] = number;
    }

    jsonrpc(const std::string &method)
    {
        (*this)["jsonrpc"] = "2.0",
        (*this)["method"] = method;
        srand(time(NULL));
        long number = rand();
        (*this)["id"] = number;
    }
};

namespace deribit_api
{

    std::string start(const std::string &input);

    std::string authorize(const std::string &cmd);
    std::string sell(const std::string &input);
    std::string buy(const std::string &input);

    std::string get_orderbook(const std::string &input);

    std::string modify(const std::string &input);

    std::string cancel(const std::string &input);

    std::string cancel_all(const std::string &input);
}