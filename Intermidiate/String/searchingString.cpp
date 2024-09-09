#include <iostream>

using namespace std;

int main() {
    string name = "Duy";
    cout << name.find('y') << endl;
    if (name.find('Y') == -1) {
        cout << "Found" << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}