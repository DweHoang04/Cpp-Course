#include <iostream>

using namespace std;

int max(int num1, int num2) {
    return(num1 > num2) ? num1 : num2;
}

//We can define the value for the variables in the function definition.
//TODO: We need to put the variable with the default value at the end of the argument list.
//If we define it in the argument, it will overwrite the value of the variable in the function definition.

//Function Signature = Name + (Number and Type of Parameters)

int main() {
    cout << "Enter two numbers: ";
    int num1, num2;
    cin >> num1 >> num2;
    cout << "The max number is: " << max(num1, num2) << endl;

    return 0;
}