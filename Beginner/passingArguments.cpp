#include <iostream>

using namespace std;

//Example 1
void increasePrice(double& price) {
    price *= 1.2;
}

int main1() {
    double price = 100;
    increasePrice(price);
    cout << "The new price is: " << price << endl;

    return 0;
}

//Example 2
void greet(string& name) { 
    //We can set the variable to constant to prevent the function from changing the value of the variable.
    cout << "Hello, " << name << "!" << endl;
}

int main2() {
    string name = "Duy";
    greet(name);
    cout << "The name is: " << name << endl;

    return 0;
}