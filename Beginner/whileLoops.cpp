#include <iostream>

using namespace std;

int main() {
    const double pi = 3.14;
    cout << "Guess the secret number: ";
    double guess;
    int i = 0;
    while (guess != pi) {
        cin >> guess;
        if (guess == pi) {
            cout << "You guessed it!" << endl;
        } else {
            cout << "Try again!" << endl;
        }
        i++;

        if (i >= 3 && i < 5) {
            cout << "Hint: The number is used to calculate the circumference of a circle." << endl;
        }
        else if (i > 5) {
            cout << "You have exceeded the number of tries." << endl;
            break;
        }
    }

    return 0;
}