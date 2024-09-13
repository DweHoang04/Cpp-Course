#include <iostream>

using namespace std;

bool isValid(string customerNumber) {
    if (customerNumber.length() != 6)
        return false;
    for (int i = 0; i < 2; i++) {
        if (!isalpha(customerNumber[i]))
            return false;
    }
    for (int j = 2; j < 6; j++) {
        if (!isdigit(customerNumber[j]))
            return false;
    }
    return true;
}

int main() {
    string customerNumber;
    while (true) {
        cout << "Enter customer number: ";
        cin >> customerNumber;
        if (customerNumber == "exit")
            break;
        if (isValid(customerNumber)) {
            cout << "Valid customer number" << endl;
            break;
        }
        else
            cout << "Invalid customer number" << endl;
    }

    return 0;
}