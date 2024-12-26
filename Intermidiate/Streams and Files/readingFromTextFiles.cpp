#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

struct movie {
    int id;
    string title;
    int year;
};

int main() {
    ifstream file; // Reading files
    file.open("data.txt"); 
    if (file.is_open()) {
        string str;
        // file >> str;  Read all the character until it meet a space or \n
        getline(file, str); // Read the whole line until meet a specific character (\n by default)
        while (!file.eof()) { // eof: end of file
            getline(file, str, ','); // In this case is the coma
            if (str.empty()) continue;

            movie movie;
            movie.id = stoi(str);

            getline(file, str, ',');
            movie.title = str;

            getline(file, str);
            movie.year = stoi(str);

            cout << movie.title << endl;
        }
        file.close();
    }

    return 0;
}