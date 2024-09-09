#include <iostream>

using namespace std;

int main() {
    string name;
    cout << "Enter your full name: ";
    getline(cin, name);
    auto pos = name.rfind(' ');
    string firstName = name.substr(0, pos);
    string lastName = name.substr(pos + 1);

    cout << "First name: " << firstName << endl;
    cout << "Last name: " << lastName << endl;
    
    return 0;
}