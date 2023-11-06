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

    return 0;
}