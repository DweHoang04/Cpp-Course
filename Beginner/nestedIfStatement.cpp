#include <iostream>

using namespace std;

int main() {

    bool isCitizen = true;
    bool caResident = true;
    short tuition = 0;
    if (isCitizen) {
        if (!caResident) tuition = 10'000; // Try to use no more than 2 levels of nesting
    }
    else tuition = 20'000;
    cout << "Tuition is $" << tuition << endl;

    return 0;
} 