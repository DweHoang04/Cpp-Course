#include <iostream>

using namespace std;

struct Movie {
    string title;
    int releaseYear = 0;
    bool isPopular;
};

int main() {
    Movie movie1 = {"Terminator", 1984};
    Movie movie2 = {"Terminator", 1984};
    
    if (movie1.title == movie2.title &&
        movie1.releaseYear == movie2.releaseYear)
        cout << "True";

    return 0;
}