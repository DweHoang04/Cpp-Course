#include <iostream>

using namespace std;

int main() {
    int number = 10;
    
    // The address-of operator
    int* ptr = &number;

    // Indirection (de-referencing) operator
    *ptr = 20;
    
    cout << *ptr << endl;

    return 0;
}