#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    // Programming Paradigms (Style of programming)
    /*
         * Procedural
         * Functional -> Centered on Functions
         * Object-oriented -> Centered on Objects
         * Event-drivenHhUWzyG9mGKruBhj
     */

    // OOP -> Object-Oriented Programming
    // Object -> a software entity that has attributes (properties) and functions (methods).
    // Class -> a blueprint or recipe for creating objects.
    // Encapsulation -> combining the data and functions that operate on the data into one unit.


    // Defining a Class
    // Creating Objects
    Rectangle rectangle{10, 20};
    Rectangle rectangle2{30, 20, "blue"};

    cout << rectangle.getWidth() << endl;
    cout << Rectangle::getObjectCounter() << endl;

    return 0;
}
