#include <iostream>

using namespace std;

/*
struct Movie {
    string title;
    int releaseYear = 0;
    bool isPopular;
};

// Implemeting operator overloading
bool operator == (const Movie& first, const Movie& second) {
    return (
        first.title == second.title &&
        first.releaseYear == second.releaseYear
    );
}

ostream& operator<<(ostream& stream, const Movie& movie) {
    stream << movie.title;
    return stream;
}

int main() {
    Movie movie1 = {"Terminator", 1984};
    Movie movie2 = {"Terminator", 1984};
    
    if (movie1 == movie2)
        cout << "True";

    return 0;
}
*/

struct Point {
    int x;
    int y;
};

bool operator==(const Point& point1, const Point& point2) {
    return (
        point1.x == point2.x &&
        point1.y == point2.y
    );
}

ostream& operator<<(ostream& stream, const Point& point) {
    return stream << "(" << point.x << ", " << point.y << ")";
}

int main() {
    Point A = {1,2};
    Point B = {1,2};

    cout << A;
}