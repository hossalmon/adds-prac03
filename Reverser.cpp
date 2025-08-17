#include "Reverser.h"
#include <string>

// digit reverser
int Reverser::reverseDigit(int value) {
    // invalid input
    if (value < 0) return -1;

    // base case - single digit
    if (value < 10) return value;

    int lastDigit = value % 10;
    int rest = value / 10;

    // find how many digits are in 'rest' of number
    int multiplier = 1;
    int temp = rest;
    while (temp > 0) {
        multiplier *= 10;
        temp /= 10;
    }

    // place lastDigit at the front, then recurse the rest
    return lastDigit * multiplier + reverseDigit(rest);
}

// string reverser
std::string Reverser::reverseString(const std::string& characters) {
    // error handling
    if (characters == "ERROR")
        return "ERROR";
    
    // base case
    if (characters.empty())
        return "";

    // base case 2
    if (characters.size() == 1)
        return characters;
    
    // recursion - last cahracter + reverse of substring (excluding last character)
    return characters.back() + reverseString(characters.substr(0, characters.size() - 1));
}