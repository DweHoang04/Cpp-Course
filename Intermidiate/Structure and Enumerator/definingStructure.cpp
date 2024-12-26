#include <iostream>

using namespace std;

struct Customer {
    int ID;
    string name;
    string email;
};

int main() {
    Customer Object;
    cout << "Enter your ID: ";
    cin >> Object.ID;

    cout << "Enter your name: ";
    cin >> Object.name;

    cout << "Enter your email: ";
    cin >> Object.email;

    cout << "Your ID: " << Object.ID << "\n"
         << "Your name: " << Object.name << "\n"
         << "Your email: " << Object.email << endl;
}