#include <iostream>

// using directive
using namespace std;

// First Program
int main() {
    // variable
    int file_size = 100;

    // constants
    const double pi = 3.14;

    // name conventions
    int big_number; // Snake Case
    int BigNumber; // Pascal Case
    int bigNumber; // Camel Case
    int iFileSize; // Hungarian Notation

    // mathematical expressions
    int x = 10;
    int y = 3;
    int z = x + y; // + - * / %

    // output to the console
    cout << z << endl;

    // reading from the console
    cout << "Enter a value: ";

    int value;
    cin >> value;
    cout << "Value is: " << value;

    return 0;
}

// How to compile the program
// g++ -o a .\currentFile

