#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int minValue = 1;
    const int maxValue = 6;

    srand(time(0));
    short dice1 = (rand() % (maxValue - minValue + 1)) + minValue;
    short dice2 = (rand() % (maxValue - minValue + 1)) + minValue;
    
    cout << dice1 << ", " << dice2 << endl;
    return 0;
}