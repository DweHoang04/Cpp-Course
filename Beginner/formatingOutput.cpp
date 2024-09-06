#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    /*
    cout << left;
    cout << setw(10) << "Spring" << setw(10) << "Nice" << endl 
         << setw(10) << "Summer" << "Hot" << endl;
    */
    /*
    cout << fixed << setprecision(10) << 12.34567 << endl;
    cout << scientific << 12.34567 << endl;  
    */

    // Exercise 1   
    cout << left << setw(15) << "Course" << setw(10) << "Students" << endl
         << left << setw(15) << "C++" << right << setw(10) << 100 << endl
         << left << setw(15) << "JavaScript" << right << setw(10) << 50 << endl;
    return 0;
}