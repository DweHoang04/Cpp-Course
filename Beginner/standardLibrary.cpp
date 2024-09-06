#include <iostream>
#include <math.h>

using namespace std;

int main() {
    /*
    This program is used to calculate the are of the circle.
    */
    cout << "Enter the radius: ";
    double radius;
    cin >> radius;

    const double pi = 3.1415;
    double area = pi * pow(radius,2);
    cout << "Area of the circle: " << area;

    return 0;
}