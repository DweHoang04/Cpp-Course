// Binary files (image, audio files, PDFs, etc)

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int numbers[] = {1'000'000, 2'000'000, 3'000'000};
    ofstream file ("numbers.dat", ios::binary); // ios: mode of the class
    if (file.is_open()) {
        file.write(reinterpret_cast<char*>(&numbers), sizeof(numbers)); 
        // Write to the specific address in the disk. The address should be in char pointer type data
        // The second parameter is the number of data you want to store in that address
        file.close();
    }

    return 0;
}