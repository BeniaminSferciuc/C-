#include <iostream>
#include <cstring>

using namespace std;

int main() {
    // C Strings
    /*
    char name[50] = "Beniamin";
    cout << strlen(name) << endl;

    char lastName[] = "Sferciuc";
    // Concatenate
    strcat(name, lastName);
    // Coping
    strcpy(name, lastName);
    // Comparing
    cout << strcmp(name, lastName) << endl;
    cout << name << endl;
    */

    // C++ Strings
    string name = "Beniamin";
    name[0] = 'b';

    cout << name.length() << endl;

    string another = name;
    cout << another << endl;

    // Raw Strings
    string file = R"("C:\users\download")";
    cout << file;

    return 0;
}