#include <iostream>

using namespace std;

void printNumbers(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << endl;
    }
}
//To pass an array to a function, we need to declare the size of the array as well.

int main() {
    int numbers[] = {10, 20, 30};
    printNumbers(numbers, size(numbers));
}