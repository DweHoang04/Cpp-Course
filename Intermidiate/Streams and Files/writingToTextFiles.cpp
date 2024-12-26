/*
File stream:
- ifstream: Input file stream
- ofstream: Output file stream
- fstream: Stream that can be used for both reading and writing
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    ofstream file; // Writing to a file
    file.open("data.txt"); // It will be created if there is no such file
    if (file.is_open()) {
        // CSV: Comma Separated Value
        file << "id,title,year\n"; // Prefered to use for performance reason
        file << "1,Terminator 1, 1984\n";
        file << "1,Terminator 2, 1991" << endl; 
        // If we use endl, the program will flush anytime it meets an "endl"
        file.close(); // Always remember to close the files
    }

    return 0;
}