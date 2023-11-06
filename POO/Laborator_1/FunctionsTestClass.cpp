#include <iostream>
#include "Test.h"

using namespace std;

void Test::set(int x, int y) {
    A = x;
    B = y;
}

void Test::print(void) {
    cout << "Test: " << A << ", " << B << endl;
}