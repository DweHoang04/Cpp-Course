#include <iostream>

using namespace std;

struct Customer {
    int ID;
    string name;
    string email;
};

struct Movie {
    string title;
    int releaseYear = 0;
    bool isPopular;
};

int main() {
    Movie movie = {"Terminator", 1984};
    // C++: Structured binding
    // Instead of initializing each variables, we do
    auto [title, releaseYear, isPopular] {movie};
    cout << title;

    return 0;
}