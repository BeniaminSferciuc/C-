#include <iostream>
#include <iomanip>

using namespace std;

struct Address {
    string street;
    string city;
    int zipCode;
};

struct Customers {
    int ID;
    Address address;
    string name;
    string email;
};

int main() {
    Customers client {
        10,
        {"Slt. Grigors", "Falticeni", 725200},
        "Beniamin",
        "sbt.beniamin@gmail.com"
    };

    /*
    cout << "Enter your ID: ";
    cin >> client.ID;
    cout << "Enter your name: ";
    cin >> client.name;
    cout << "Enter your email: ";
    cin >> client.email;
    */

    cout << client.address.city << endl;
    cout << "You entered:" << endl
         << left << setw(10) << "ID: " << setw(10) << client.ID << endl
         << setw(10) << "Name: " << setw(10) << client.name << endl
         << setw(10) << "Email: " << setw(10) << client.email << endl;



    return 0;
}