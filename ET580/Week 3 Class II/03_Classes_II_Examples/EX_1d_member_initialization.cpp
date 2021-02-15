// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
public:
    // member initialization - default data member values are assigned for all objects
    int number = 5;
    string professor = "Staff";

    // default constructor
    // no values initialized, number and professor value set by member initialization
    Course() {
    }
    // one-parameter constructor
    // number value set by initialization list, professor value set by member initialization
    Course(int n): number(n) {
    }
};

int main() {
    cout << endl;

    Course c1{};                    // call the default constructor
    cout << c1.number << "\n";      // prints the value assigned by member initialization
    cout << c1.professor << "\n\n"; // prints the value assigned by member initialization

    Course c2{580};                 // call the one-parameter constructor
    cout << c2.number << "\n";      // prints the value assigned by the one-parameter constructor
    cout << c2.professor << "\n";   // prints the value assigned by member initialization

    cout << endl;
    return 0;
}
