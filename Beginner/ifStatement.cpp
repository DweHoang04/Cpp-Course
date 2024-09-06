#include <iostream>

using namespace std;

int main() {
    cout << "What is this year sales? ";
    short sales;
    cin >> sales;
    double commission;
    if (sales <= 10'000)
        commission = 0.1;
    else if (sales <= 15'000)
        commission = 0.15;
    else
        commission = 0.2;
    cout << "Commission is $" << commission * sales << endl;
    return 0;
}