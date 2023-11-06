#include <iostream>
#include <memory>

using namespace std;

void increasePrice(double* price) {
    *price *= 1.2;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Pointers
    int number = 10;
    cout << &number << endl; // the address

    int* ptr = &number;
    cout << ptr << endl;

    double price = 100;
    increasePrice(&price);
    cout << price << endl;

    // swap
    int a = 1;
    int b = 2;

    swap(&a, &b);
    cout << "a = " << a << endl << "b = " << b << endl;

    int numbers[] = {10, 20, 30};
    int* ptrArr = &numbers[sizeof(numbers) / sizeof(int)];

    while (ptrArr >= numbers) {
        cout << *ptrArr << endl;
        ptrArr--;
    }

    // Dynamic Memory Allocation

    // Stack
    //int array[1000];

    // Heap (Free Store)
    int* array = new int[10];
    int* arr = new int; // <=> int arr;
    *arr = 10;
    delete arr;
    delete[] array;
    arr = nullptr;
    array = nullptr;

    int* listOfNumbers = new int[5];
    int entries = 0;
    int capacity = 5;

    while (true) {
        cout << "Number: ";
        cin >> listOfNumbers[entries];
        if (cin.fail()) break;
        entries++;

        if (entries == capacity) {
            capacity *= 2;
            int* temp = new int[capacity];

            for (int i = 0; i < entries; i++)
                temp[i] = listOfNumbers[i];
            delete[] listOfNumbers;
            listOfNumbers = temp;
        }
    }

    for(int i = 0; i < entries; i++) {
        cout << listOfNumbers[i] << endl;
    }

    delete[] listOfNumbers;

    // Smart Pointers
    // Unique pointers
    auto x = make_unique<int[]>(10);
    auto y = make_unique<int>();
    x[0] = 10;
    cout << x[0] << endl;

    // Shared pointers
    auto xx = make_shared<int>();
    *xx = 10;

    shared_ptr<int> yy(xx);

    if (xx == yy)
        cout << "Equal" << endl;

    cout << *yy;

    return 0;
}