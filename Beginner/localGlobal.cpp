#include <iostream>

using namespace std;

//Global variable (global scope): Should avoid using this
const double taxRate = .2;

double calculateTax(double price) {
    return price * taxRate;
}

int main() {
    //Local variable (local scope)
    double price = 10'000;
    cout << "The tax is: " << calculateTax(price) << endl;

    return 0;
}