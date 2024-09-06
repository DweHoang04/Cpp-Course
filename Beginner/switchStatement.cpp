#include <iostream>

using namespace std;

int main() {
    // Switch statement can only be used with the equality operator
    cout << "Enter two numbers: ";
    int num1, num2;
    cin >> num1 >> num2;
    cout << "Enter an operator (+, -, *, /): ";
    char operatorSymbol;
    cin >> operatorSymbol;

    switch (operatorSymbol) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}