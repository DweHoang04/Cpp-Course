#include <iostream>
#include <limits>

using namespace std;

int main() {;
    cout << numeric_limits<long long>::min() << endl
         << numeric_limits<long long>::max() << endl
         << sizeof(long long) << endl;
}