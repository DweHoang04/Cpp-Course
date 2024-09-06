#include <iostream>

using namespace std;

int search(int array[], int size, int target) {
    for (int i = 0; i < size; i++)
        if (array[i] == target) 
            return i;
    return -1;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int target = 60;
    if (search(numbers, size(numbers), target) != -1)
        cout << "Element found at index: " << search(numbers, size(numbers), target) << endl;
    else 
        cout << "Element not found" << endl;
    
    return 0;
}