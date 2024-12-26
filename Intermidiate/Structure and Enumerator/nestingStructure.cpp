#include <iostream>

using namespace std;

struct Address {
    string street;
    string city;
    short zipCode = 10000;
};

struct Customer {
    int ID;
    string name;
    string email;
    Address address;
};

int main() {
    Customer customer = {
        1, "Mosh", "email",
        {
            "Dai Co Viet",
            "Ha Noi",
            10000
        }
    };

    return 0;
}