#include <iostream>

using namespace std;

int main() {
    short rows;
    //Check if the user entered a number greater than 0
    while (true) {
        cout << "Enter the number of rows: ";
        cin >> rows;
        if (rows >= 1) {
            break;
        }
        cout << "Please enter a number greater than 0: " << endl;
    }
    
    //Loop to print the "*" in the triangle pattern
    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < i; j++) 
            cout << "*";
        cout << endl;
    }

    return 0;
}