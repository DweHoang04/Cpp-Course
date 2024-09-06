#include <iostream>
#include <limits>

using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    //size_t = unsigned long long.
    cout << numeric_limits<long long>::min() << endl;
    cout << numeric_limits<long long>::max() << endl;
    cout << numeric_limits<size_t>::min() << endl;
    cout << numeric_limits<size_t>::max() << endl;
    
    return 0;
}