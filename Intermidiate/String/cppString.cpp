#include <iostream>

using namespace std;

int main() {
    string name = "Duy";
    name[0] = 'T';
    name += " Hoang";
    string anotherName = "Duy";
    if (name == anotherName) {
        cout << "Equal" << endl;
    } else {
        cout << "Not equal" << endl;
    }

    return 0;
}