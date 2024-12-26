#include <iostream>

using namespace std;

// Stronger type of enum
enum class Action {
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

    if (input == static_cast<int>(Action::List)) // enum class values is in binary
        cout << "List invoice";

    return 0;
}