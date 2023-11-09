#include <iostream>
#include <limits>
#include <fstream>
#include <iomanip>
#include <sstream>

using namespace std;

int readNumberValue(const string prompt) {
    // Reading from Streams
    // Buffer: temporary storage
    // Handling Input Errors
    int value;

    while (true) {
        cout << prompt << ": ";
        cin >> value;
        if (cin.fail()) {
            cout << "Enter a valid number!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clean the buffer
        }
        else break;
    }

    return value;
}

struct Movie {
    int id;
    string title;
    int year;
};

int main() {
    // Understanding streams ⤵
    // Data Sources -> terminal, file, network
    // Type of streams:
    /*
         * istream (input stream)
         * ostream (output stream)
         * ifstream (input file stream)
         * ofstream (output file stream)
         * fstream (combining input and output)
         * istringstream (reading a string)
         * ostringstream (writing a string)
         * stringstream (combining reading and writing)
     */

    // int first = readNumberValue("First");
    // int second = readNumberValue("Second");
    // cout << "You entered: " << first << " and " << second << endl;

    // File Streams
    // Writing to Text Files
    ofstream file;
    file.open("data.csv");

    if (file.is_open()) {
        // CSV: Comma Separated Value
        file << "id,title,year\n";
        file << "1,Terminator1,1984\n";
        file << "2,Terminator2,1999\n";
        // file << setw(20) << "Hello" << setw(20) << "World" << endl;
        file.close();
    }

    // Reading from Text Files
    ifstream ifile;
    ifile.open("data.csv");

    if (ifile.is_open()) {
        // ifile >> str; // this method read text until first space
        string str;
        getline(ifile, str);

        while (!ifile.eof()) {
            getline(ifile, str, ',');
            if(str.empty()) continue;

            Movie movie;
            movie.id = stoi(str);

            getline(ifile, str, ',');
            movie.title = str;

            getline(ifile, str);
            movie.year = stoi(str);

            cout << movie.title << endl;
        }
        ifile.close();
    }

    // Writing to Binary Files
    int numbers[] = {1'000'000, 2'000'000, 3'000'000};
    ofstream ofile;
    ofile.open("numbers.bin", ios::binary);
    if (ofile.is_open()) {
        ofile.write(reinterpret_cast<char*>(&numbers), sizeof(numbers));
        ofile.close();
    }

    // Reading from Binary Files
    int rnumbers[3];
    ifstream iffile("numbers.bin", ios::binary);

    if (iffile.is_open()) {
        int number;
        while (iffile.read(reinterpret_cast<char*>(&number), sizeof(number))) {
            cout << number << endl;
        }
        iffile.close();
    }

    // Working with File Streams
    /*
    fstream iofile;
    iofile.open("file.txt", ios::in | ios::out | ios::app | ios::binary); // reading and writing and appending

    if (iofile.is_open()) {
        *//*  *//*
        file.close();
    }
    */

    // String Streams
    // Converting Values to Strings
    double number = 12.34;
    stringstream stream;

    stream << fixed << setprecision(1) << number;
    string str = stream.str();

    cout << str << endl;

    // Parsing Strings
    string arr = "Hei! I am Beniamin Sferciuc. Sunt fiul dreptei si o sa vin curand.";
    stringstream parse;

    parse.str(arr);

    int countSpace = 0;
    for (char letter: arr) {
        if (isspace(letter))
            countSpace++;
    }

    string sarr[countSpace + 1];

    for (int i = 0; i < countSpace + 1; i++) {
        parse >> sarr[i];
    }
    /*
    string first;
    parse >> first;

    string second;
    parse >> second;

    cout << first << " --- " << second << endl;
    */

    for (string word: sarr)
        cout << word << endl;

    return 0;
}
