#include <iostream>

using namespace std;

int main() {
    /* EXAMPLE: Logical Operators
    int age = 20;
    int salary = 50000;
    bool isEligible = (age > 18 && age < 45) && (salary > 50'000);
    cout << boolalpha << isEligible; //If we add ! in front of isEligible, it will return false

    // Order of Logical Operators: () -> NOT (!) -> AND (&&) -> OR (||)
    */

   // Exercise: Logical Operators
    cout << "Are you a US citizen? (yes/no): ";
    string usCitizen;
    cin >> usCitizen;
    cout << "Do you have a Bachelor's degree? (yes/no): ";
    string bachelorDegree;
    cin >> bachelorDegree;
    cout << "How many years of work experience do you have? ";
    int yearsOfExperience;
    cin >> yearsOfExperience;
    bool isEligible = (usCitizen == "yes") && ((bachelorDegree == "yes") || (yearsOfExperience >= 2));
    cout << boolalpha << isEligible;

    return 0;
}