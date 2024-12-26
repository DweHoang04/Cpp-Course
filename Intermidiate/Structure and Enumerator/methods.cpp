#include <iostream>

using namespace std;

struct Movie {
    string title;
    int releaseYear = 0;
    bool isPopular;

    // Methods: Function which is part of an object
    bool equals(const Movie& movie) {
        return (
            title == movie.title &&
            releaseYear == movie.releaseYear
        );
    }
};

int main() {
    Movie movie1 = {"Terminator", 1984};
    Movie movie2 = {"Terminator", 1984};
    
    if (movie1.equals(movie2))
        cout << "True";

    return 0;
}