#include <iostream>

using namespace std;

void greet(string name) {
    cout << "Hello, " << name + '!' << endl;
}

string fullName(string firstName, string lastName = "Popescu") {
    string fullName = firstName + ' ' + lastName;
    return fullName;
}

// global variable
double taxRate = .2;

// passing arguments be reference
void increasePrice(double& price) {
    price *= 1.2;
}

int main(void) {
    // Calling - invoking - executing
    string name = fullName("Beniamin");
    greet(name);

    // local variable
    double price = 100;
    increasePrice(price);
    cout << price;

    return 0;
}