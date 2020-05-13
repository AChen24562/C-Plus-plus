// (c)S. Trowbridge & J. Sun
// PE4

#include <iostream>
#include <fstream>

using namespace std;

int main() {

    string line;

    //ifstream fin("PE1.txt");
    ifstream fin("PE101.txt");

    if(! fin.fail() ) {
        getline(fin, line);
        cout << line << endl;
    }
    else {
        cout << "File does not exist." << endl;
    }

    fin.close();
    return 0;
}
