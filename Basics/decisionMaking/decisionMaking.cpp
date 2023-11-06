#include <iostream>

using namespace std;

int main(void) {
    // > < >= <= == !=
    // && || !

    int x = 5;
    int y = 10;
    bool result = x != y;
    cout << boolalpha << result << endl;

    short input;
    cin >> input;

    switch (input) {
        case 1:
            cout << "You selected 1.";
            break;
        case 2:
            cout << "You selected 2.";
            break;
        case 3:
            cout << "You selected 3.";
            break;
        default:
            cout << "Goodbye";
    }

    return 0;
}