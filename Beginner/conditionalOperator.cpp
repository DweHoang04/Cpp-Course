#include <iostream>

using namespace std;

int main() {
    // Use to simplify nested if statements
    //EXAMPLE
    /*
    int sales = 11'000;
    double commission = (sales > 10'000) ? .1 : .05; // If sales > 10,000, commission is .1, else .05
    */
    
    cout << "Enter two numbers: ";
    int num1, num2;
    cin >> num1 >> num2;
    int max = (num1 > num2) ? num1 : num2;
    
    /*
    if (num1 > num2) max = num1;
    else max = num2;
    cout << "The larger number is " << max << endl;
    */
    cout << "The larger number is " << max << endl;

    return 0;
}