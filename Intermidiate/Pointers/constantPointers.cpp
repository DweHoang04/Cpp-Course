#include <iostream>

using namespace std;

int main() {
    // Case 1: Constant integer
    const int x = 10;
    const int* ptr1 = &x;

    // Case 2: Constant pointer
    int y = 20;
    int* const ptr2 = &y;

    // Case 3: Constant pointer to a constant integer
    const int z = 30;
    const int* const ptr3 = &z;

}