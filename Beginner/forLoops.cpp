#include <iostream>

using namespace std;

int main() {
    cout << "Enter a positive integer: ";
    int n;
    cin >> n;
    if (n < 0) {
        cout << "The number must be positive." << endl;
        return 1;
    }
    else {
        int factorial = 1;
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        cout << "The factorial of " << n << " is " << factorial << endl;
    }

    return 0;
}