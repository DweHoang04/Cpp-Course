#include <iostream>

using namespace std;

void printnumbers(int numbers[]) {
    numbers[0] = 0;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    printnumbers(numbers);
    cout << numbers[0] << endl;
    // Always passes array using pointer

    return 0;
}