//(c) S. Trowbridge & J. Sun
// 1 - Using different data types

#include <iostream>
//#include <string>
using namespace std;

int main() {

    string name, ID;    char gender;
    int age, id;        bool isCUNY;    double gpa;


    cout << "What is your name? ";
    getline(cin, name);
    //cin >> name;

    cout << "What is your ID? ";
    //getline(cin, ID);
    cin >> id;

    cout << "What is your gender (M/F/T)? ";
    cin >> gender;

    cout << "What is your age? ";
    cin >> age;

    // 1 is interpreted as true, 0 as false
    cout << "Are you a CNUY student (1 = Yes / 0 = No)? ";
    cin >> isCUNY;

    cout << "What is your GPA? ";
    cin >> gpa;

    cout << endl;
    cout << "You answered:\n"
         << name    << ", "
         << id      << ", "
         << gender  << ", "
         << age     << ", "
         << isCUNY  << ", "
         << gpa     << endl;

    cout << endl;
    return 0;
}
