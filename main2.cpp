#include <iostream>
#include "Reverser.h"

int main() {
    Reverser r;

    std::cout << r.reverseDigit(12345) << std::endl;    // 54321
    std::cout << r.reverseDigit(-42) << std::endl;      // -1

    std::cout << r.reverseString("hello") << std::endl; // olleh
    std::cout << r.reverseString("") << std::endl;      // ""
}