#include <iostream>

using namespace std;

int main() {
    /*Example
    int numbers[] = {1, 2, 3};
    for (int number : numbers) {
        cout << number << endl;
    }
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++) {
        cout << numbers[i] << endl;
    }
    */

    //Exercise
    cout << "Enter numbers of days: ";
    int days;
    cin >> days;
    cout << "Enter temperatures in Celsius in that period: ";
    int temperatures[days];
    for (int i = 0; i < days; i++) {
        cin >> temperatures[i];
    }

    int sum = 0;
    for (int temperature: temperatures) {
        sum += temperature;
    }
    cout << "Average temperature: " << sum / days << endl;

    return 0;
}