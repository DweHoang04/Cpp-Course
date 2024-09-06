#include <iostream>

using namespace std;

int main() {
    //Creating an array
    int numbers[] = {1, 2, 3, 4, 5};

    //Determining the size of an array
    int sizeOfArray = sizeof(numbers) / sizeof(numbers[0]);
    int sizeOfArray2 = size(numbers);

    //Copying an array
    int first[] = {10, 20, 30};
    int second[size(first)];

    for (int i = 0; i < size(first); i++) {
        second[i] = first[i];
    }

    for (int i = 0; i < size(second); i++) {
        cout << second[i] << endl;
    }

    return 0;
}