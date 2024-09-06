#include <iostream>

using namespace std;

void swap(int array[], int i, int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

void bubble(int array[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) 
            if (array[j] > array[j + 1]) 
                swap(array, j, j + 1);
    }
}

int main() {
    int array[] = {7};
    bubble(array, size(array));
    for (int i = 0; i < size(array); i++) 
        cout << array[i] << " ";

    return 0;
}