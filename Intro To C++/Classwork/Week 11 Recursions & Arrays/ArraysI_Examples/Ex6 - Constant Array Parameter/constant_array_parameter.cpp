// (c)S. Trowbridge & J.Sun
// Ex6 - constant array parameters improved

#include <iostream>
#include <string>
using namespace std;
void initialize(string n[]);
void outputNames(const string n[], const int& CAP);
bool updateName(string n[], const int& CAP, int index, string newName);

int main() {
    string name;
    int option;

    const int CAPACITY = 5;
    string names[CAPACITY];
    initialize(names);
    outputNames(names, CAPACITY);

    cout << "\nSelect a name to change: ";
    cin >> option;
    cout << "\nEnter a new name: ";
    cin >> name;
    cout << endl;

    if( updateName(names, CAPACITY, option, name) ) {
        cout << "Name updated!" << endl << endl;
        outputNames(names, CAPACITY);
    }
    else
        cout << "Name cannot be updated!" << endl << endl;

    cout << endl << endl;
    return 0;
}

void initialize(string n[]){
    n[0] = "Alex";
    n[1] = "Billy";
    n[2] = "Cindy";
    n[3] = "Denise";
    n[4] = "Edward";

}
void outputNames(const string n[], const int& CAP) {
    cout << "List of Students:" << endl;
    cout << "-----------------" << endl;
    int i=0;
    while(i<CAP) {
        cout << "Person " << i+1 << ": " << n[i] << endl;
        i++;
    }
}
bool updateName(string n[], const int& CAP, int index, string newName) {
    // if index is out of bounds, do not update
    if(index <= CAP) {
        n[index-1] = newName;
        return true;
    }
    else
        return false;
}
