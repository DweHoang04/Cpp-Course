#include <iostream>

using namespace std;

int main() {
    string str = "\"Hello, World!\""; // Escape sequence for double quote
    string str2 = "Hello\n World!"; // Escape sequence for newline
    string str3 = "Hello\t World!"; // Escape sequence for tab
    
    cout << str << endl;
    
    return 0;
}