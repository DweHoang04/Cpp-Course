#include <iostream>
#include <limits>

using namespace std;

int main() {
    // Buffer: temporary storage
    // [10 20]
    cout << "First: ";
    int first;
    cin >> first;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    // Clear buffer, clear the maximum value using numeric_limits

    cout << "Second: ";
    int second;
    cin >> second;

    cout << "You entered " << first << " and " << second;
}