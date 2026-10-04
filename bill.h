#pragma once
#include <string>

struct Bill {
    double amount;
    std::string category;
    std::string note;
    std::string date;
    void print() const;
};