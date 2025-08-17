#include <iostream>
#include "Truckloads.h"

int main() {
    Truckloads bigT;
    std::cout << bigT.numTrucks(14, 3) << std::endl;    // 6 trucks 
    std::cout << bigT.numTrucks(15, 1) << std::endl;    // 15 trucks
    std::cout << bigT.numTrucks(1024, 5) << std::endl;  // 256 trucks
}