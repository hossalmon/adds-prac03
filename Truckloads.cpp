#include "Truckloads.h"

// 1) Calculating trucks needed
// if current pile fits into one truck --> 1 truck.
// otherwise, split into two piles as evenly as possible and sum trucks needed

int Truckloads::numTrucks(int numCrates, int loadSize) {
    // base case - this pile fits in one truck
    if (numCrates <= loadSize)
        return 1;
    
    // split into two piles - for odd numCrates, right gets extra 1
    int left = numCrates / 2;       // integer division
    int right = numCrates - left;   // remainder

    // recursion on both piles and sum trucks
    return numTrucks(left, loadSize) + numTrucks(right, loadSize);

}