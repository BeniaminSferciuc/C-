#include <iostream>

using namespace std;

int main(void) {
    // for loop
    int numbers[] = {1,2,3,4,5};
    int length = sizeof(numbers) / sizeof(int);

    for (int i = 0; i < length; i++) {
        cout << numbers[i] << endl;
    }

    // for range
    string name = "Beniamin";

    for (char letter: name) {
        cout << letter << " ";
    }

    cout << endl;

    // while loop
    int i = 1;

    while (i <= 5) {
        cout << i << endl;
        i++;
    }

    // do-while
    // ...

    short size {};
    cin >> size;

    for (int x = 1; x <= size; x++) {
        for (int y = 0; y < x; y++) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}