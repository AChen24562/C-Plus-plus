// (c) S. Trowbridge & J. Sun
// PE stringstream file parsing 3 - processing data


#include <iostream>
#include <string>
#include <sstream>  // support for stringstream text parsing
#include <fstream>  // support for file input and output
using namespace std;

int main() {
    ifstream fin("data3.txt");

    const int CAPACITY = 100;
    int numElements = 0;
    int numbers[CAPACITY];
    string line, token;


    while(getline(fin, line)) {         // read one line at a time from the file, until end of file
        istringstream parser(line);           // associate a stringstream object with the recently read line
        while(getline(parser, token, '|')) {
            istringstream converter(token);
            converter >>numbers[numElements++];
        }
    }

    fin.close();

    for (int i = 0; i < numElements; i++){
            cout << numbers[i] << "  ";
    }
    cout << endl;
    return 0;
}
