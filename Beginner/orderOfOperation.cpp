#include <iostream>

using namespace std;

int main() {
    double sales = 95000;
    const double stateTaxRate = 0.04;
    const double countyTaxRate = 0.02;

    int stateTax = sales * stateTaxRate;
    int countyTax = sales * countyTaxRate;
    int total = stateTax + countyTax;

    cout << "State Tax: $" << stateTax << endl
         << "County Tax: $" << countyTax << endl
         << "Total Tax: $" << total;

    return 0;
}