// Structures and Enumerations
/*
 * Define structures
 * Use structures
 * Operator overloading
 * Pointers to structures
 * Enumerations
 */

#include <iostream>
#include <vector>

using namespace std;

// Defining Strucrures (Use PascalCase)
// Nesting Structures
struct Date {
    short year = 1900; // default value
    short month = 1;
    short day = 1;
};

struct Movie {
    string title;
    Date releaseDate;
    bool isPopular; // false <- default value

    // Working with Methods
    // & - reference
    // const - prevents the change of members
    bool equals(const Movie& movie) {
        return (
            title == movie.title &&
            releaseDate.year == movie.releaseDate.year &&
            releaseDate.month == movie.releaseDate.month &&
            releaseDate.day == movie.releaseDate.day &&
            isPopular == movie.isPopular
        );
    }

    // Operator Overloading
    bool operator==(const Movie& movie) const {
        return (
                title == movie.title &&
                releaseDate.year == movie.releaseDate.year &&
                releaseDate.month == movie.releaseDate.month &&
                releaseDate.day == movie.releaseDate.day &&
                isPopular == movie.isPopular
        );
    }
};

ostream& operator<<(ostream& stream, const Movie& movie) {
    stream << movie.title;

    return stream;
}

// Exercise
/*
 * Define a structure for representing a point.
 * X, Y
 * Overload the equality (==) and stream insertion operators (<<) for points
*/

struct Point {
    int x;
    int y;
};

// PointA, PointB => bool
bool operator==(const Point& first, const Point& second) {
    return (first.x == second.x && first.y == second.y);
}

// stream, point => stream
ostream& operator<<(ostream& stream, const Point& point) {
    return stream << "(" << point.x << ", " << point.y << ")";
}

// Structures and Functions
Movie getMovie() {
    return {"Terminator", 1984};
}

void showMovie(Movie& movie) {
    cout << movie.title << endl;
}
// <=>
// Pointers to Structures
void showMovie1(Movie* movie) {
    // cout << (*movie).title;
    // <=>
    cout << movie->title << endl; // -> structure pointer operator
}

// Defining Enumerations
enum class Action {
    List = 1,
    Add, // this will be 2
    Update
};

// Strongly Typed Enumerations (class)
enum class Operation {
    List = 1,
    Add, // this will be 2
    Update
};


int main() {
    // Initializing Structures
    Movie movie = {"End-Game", 2019}; // object
    // <=>
    // movie.title = "End-Game";
    // movie.releaseYear = 2019;

    cout << "Title: " << movie.title << endl;
    cout << "Release Year: " << movie.releaseDate.year << endl;

    // Unpacking Structures or Structured Binding
    // auto [title, releaseYear, isPopular] = movie;

    // string title = movie.title;
    // int releaseYear = movie.releaseYear;
    // bool isPopular = movie.isPopular;

    // cout << title + ' ' << boolalpha << releaseYear << " " << isPopular << endl;

    // Array of Structures
    // vector (standard library) -> dinamic array
    vector<Movie> movies;

    // Initializing relaseDate
    // Method 1
    Date date {2002, 6, 1};
    movies.push_back({"Ice Age 1", date});
    // Method 2
    movies.push_back({"Ice Age 2", {2006, 2, 12}});
    movies.push_back({"Ice Age 3", {2009, 9, 9}});

    for (const auto& movie: movies)
        cout << movie.title << " "
             << movie.releaseDate.year
             << " " << movie.releaseDate.month
             << " " << movie.releaseDate.day
             << endl;

    // Comparing Structures
    // You can't compare structures, but can compare every member from a structure

    Movie movie1 = {"End-Game", 2019};

    if (movie.equals(movie1)) {
        cout << "Equal" << endl;
    } else {
        cout << "Not Equal" << endl;
    }

    // <=> (Operator Overloading)
    if (movie == movie1)
        cout << "Equal!" << endl;

    cout << movie1 << endl;

    Point x = {1, 2};
    Point y = {1, 2};

    cout << (x == y) << endl;
    cout << x << endl;

    // Structures and Functions
    auto movie2 = getMovie();
    showMovie(movie2);

    // Pointers to Structures
    // <=>
    auto movie3 = getMovie();
    showMovie1(&movie3);

    // Defining Enumerations
    cout <<
        "1: List invoices" << endl <<
        "2: Add invoice" << endl <<
        "3: Update invoice" << endl <<
        "Select: ";

    int input;
    cin >> input;

    // Strongly Typed Enumerations
    if (input == static_cast<int>(Action::List)) {
        cout << "List invoices";
    }

    return 0;
}

