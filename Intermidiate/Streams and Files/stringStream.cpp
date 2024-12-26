// Similar to fstream

#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

string doubleToString(double number, int precision) {
    stringstream stream;
    stream << fixed << setprecision(precision) << number;

    return stream.str();
}

int main() {
    double number = 12.34;
    string str = doubleToString(number, 2);
    cout << str;

    return 0;
}