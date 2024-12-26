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

Movie getMovie() {
    return {"Terminator", 1984};
}

void showMovie(Movie& movie) {
    cout << movie.title;
}

int main() {
    auto movie = getMovie();
    showMovie(movie);

    return 0;
}