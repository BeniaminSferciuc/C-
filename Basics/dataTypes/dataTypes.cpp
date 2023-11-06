#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

// Fundamental Types
// short, int, long, long long,
// float, double, long double, bool, char

int main() {
    double price = 99.99;
    float interestRate = 3.67F; //always
    long fileSize = 90000L;
    char letter = 'a';
    bool isValid = false;
    auto something = 47289L;

    // initialize with {}
    int number {}; // => implicitly initialized with 0
    cout << number;

    // generating random numbers
    const int min_value = 1;
    const int max_value = 6;

    srand(time(nullptr));
    number = rand() % (max_value - min_value + 1) + min_value;
    cout << number << endl;

    // formatting output
    cout << left;
    cout << setw(10) << "Spring" << setw(10) << "Winter" << endl
         << setw(10) << "Summer" << setw(10) << "Autum" << endl;

    cout << fixed << setprecision(2) << 12.34567 << endl;

    cout << setw(10) << "Course" << setw(10) << "Students" << endl
         << setw(10) << "C++" << right << setw(10) << 100 << endl
         << setw(10) << "JavaScript" << right << setw(10) << 50 << endl;

    // sizeof(type)
    cout << sizeof(int) << endl;

    bool isNewUser = true;
    cout << boolalpha << isNewUser << endl;

    // characters and strings
    char ch = 'a';
    cout << ch << endl;

    string name = "Beniamin Sferciuc";
//    getline(cin, name);
    cout << "Hi, " << name << "!" << endl;

    // arrays
    int numbers[5] = {10, 20, 30, 40, 50};

    cout << numbers[0] << endl;

    // type casting
    int x = 1;
    double y = 2.0;
    // int z = x + (int) y;
    int z = x + static_cast<int>(y);

    cout << z << endl;

    return 0;
}