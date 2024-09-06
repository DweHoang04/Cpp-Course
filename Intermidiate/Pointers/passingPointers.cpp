#include <iostream>

using namespace std;

/* 
EXAMPLE

void increasePrice(double* price) {
    *price *= 1.2;
}

int main() {
    double price = 100;
    increasePrice(&price);
    cout << price << endl;

    return 0;
}
*/

void swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main() {
    int first = 100;
    int second = 200;
    swap(&first, &second);
    cout << "First: " << first << endl;
    cout << "Second: " << second << endl;

    return 0;
}