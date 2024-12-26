#include <iostream>

using namespace std;

enum Action {
    List = 1,
    Add = 2,
    Update = 3
};

int main() {
    cout << "1: List invoices\n" 
         << "2: Add invoice\n"
         << "3: Update invoice\n"
         << "Select: ";
    
    int input;
    cin >> input;

    if (input == Action::List)
        cout << "List invoice";

    return 0;
}