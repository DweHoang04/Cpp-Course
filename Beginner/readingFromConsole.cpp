#include <iostream>
using namespace std;

int main() {
    cout << "Enter the temperature in Fahrenheit: ";
    int tempF;
    cin >> tempF;
    double tempC = (tempF - 32) * (5 / 9);
    cout << "The temperature in Celsius: " << tempC;
    return 0;
}