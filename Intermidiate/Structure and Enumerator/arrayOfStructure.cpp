#include <iostream>
#include <vector>

using namespace std;

struct Movie {
    string title;
    int releaseYear = 0;
    bool isPopular;
};

int main() {
    vector<Movie> movies; // Preferred way
    movies.push_back({"Terminator 1", 1984});
    movies.push_back({"Terminator 2", 1987});
    // Movie movies[5]; Not preffered

    for (const auto& movie3 : movies)
        cout << movie.title << endl;

    return 0;
}