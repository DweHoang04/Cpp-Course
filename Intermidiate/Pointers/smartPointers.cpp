#include <iostream>
#include <memory>

using namespace std;

int main() {
    // Unique pointers
    auto numbers = make_unique<int[]>(10);
    auto y = make_unique<int>();
    /*
    We can't perform arithmetic operations on unique pointers.
    We don't have to delete the memory allocated by the unique pointer.
    */
    numbers[0] = 5;
    cout << numbers[0] << endl;

    // Shared pointers
    auto a = make_shared<int>();
    *a = 10;

    shared_ptr<int> b(a);
    cout << *b << endl;

    return 0;
}