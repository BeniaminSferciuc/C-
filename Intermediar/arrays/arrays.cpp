#include <iostream>

using namespace std;

void print(int numbers[], int size);
int find(int numbers[], int size, int target);

int main() {
    // Creating and Initializing Arrays
    int numbers[] = {10, 20, 30, 40, 50};

    // Determining the Size of Arrays
    int size = sizeof(numbers) / sizeof(int);

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << endl;
    }

    // Copying Arrays
    int first[] = {1,2,3};

    size = sizeof(first)/sizeof(int);
    int second[size];

    for (int i = 0; i < size; i++) {
        second[i] = first[i];
    }

    // Comparing Arrays
    bool areEqual = true;

    for (int i = 0; i < size; i++) {
        if (first[i] != second[i])
            areEqual = false;
            break;
    }

    areEqual ? cout << "Are equal!" << endl : cout << "Not equal!" << endl;

    // Passing Arrays to Functions
    // print(first, size);

    // Understanding size_t
    cout << sizeof(size_t) << endl;
    // size_t == unsigned int

    /*
        // Unpacking Arrays
        int values[] = {100, 200, 300};
        // C++: structured binary
        auto [x, y, z] = values;
    */

    // Searching Arrays
    size = sizeof(numbers) / sizeof(int);
    int result = find(numbers, size, 21);

    if (result == 1) {
        cout << "Elementul exista!";
    } else {
        cout << "Elementul nu exista!";
    }

    // Sorting Arrays
    // using bubble sort

    int randomValues[] = {5, 2, 7, 8, 3};

    for (int i = 0; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            if (randomValues[j] < randomValues[j - 1]) {
                int temp = randomValues[j];
                randomValues[j] = randomValues[j - 1];
                randomValues[j - 1] = temp;
            }
        }
    }

    for (int num: randomValues) cout << num << " ";

    // Multi-dimensional Arrays
    int rows = 2;
    int columns = 3;

    int matrix[rows][columns] = {
            {11, 12, 13},
            {21, 22, 23}
    };



    for (int row = 0; row < rows; row++) {
        cout << endl;
        for (int col = 0; col < columns; col++) {
            cout << matrix[row][col] << " ";
        }
    }
    return 0;
}

void print(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << endl;
    }
}

int find(int numbers[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (target == numbers[i]) {
            return 1;
        }
    }
    return -1;
}

