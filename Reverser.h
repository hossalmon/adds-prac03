#ifndef REVERSER_H
#define REVERSER_H

#include <string>

class Reverser {
    public:
    // reverse digits of a non-negative integer
    int reverseDigit(int value);

    // reverse a string
    std::string reverseString(const std::string& characters);

};

#endif 