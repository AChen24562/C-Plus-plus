// (c) S. Trowbridge & J. Sun
// PE stringstream file parsing 3 - processing data


#include <iostream>
#include <string>
#include <sstream>  // support for stringstream text parsing
#include <fstream>  // support for file input and output
using namespace std;

void outputDatatoArray(string ifn){
    ifstream fin(ifn);

    const int CAPACITY = 100;
    int numElements = 0;
    int numbers[CAPACITY];
    string line, token;

    // read one line at a time from the file, until end of file
    while(getline(fin, line)) {
        // associate a stringstream object with the recently read line
        istringstream parser(line);

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
}
int main() {
    outputDatatoArray("data3.txt");

  return 0;
}
