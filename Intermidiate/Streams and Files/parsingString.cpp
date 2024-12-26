#include <iostream>
#include <sstream>

using namespace std;

struct Movie {
    string title;
    int year;
};

/* Practice */
Movie parseMovie(string str) {
    stringstream stream;
    stream.str(str);

    Movie movie;
    getline(stream, movie.title, ',');
    stream >> movie.year;

    return movie.year;
}

int main() {
    /* Example */
    string str = "10 20";
    stringstream stream;
    stream.str(str);

    int first;
    stream >> first;

    int second;
    stream >> second;

    cout << first + second;

    return 0;
}