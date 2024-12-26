// Binary files (image, audio files, PDFs, etc)

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int numbers[3];
    ifstream file ("numbers.dat", ios::binary); // ios: mode of the class
    if (file.is_open()) {
        int number;
        while (file.read(reinterpret_cast<char*>(&number), sizeof(number)))
        // Read to the specific address in the disk. The address should be in char pointer type data
        // The second parameter is the number of data (byte) you want to store in that address
            cout << number;
        file.close();
    }

    return 0;
}