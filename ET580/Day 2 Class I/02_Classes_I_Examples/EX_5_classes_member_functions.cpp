// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
public:
    string name;

    // MEMBER functions - DECLARED INSIDE of the class
    void setName(string n) {        // member access by calling object
        name = n;                   // direct access to calling object members
    }
    void output() {                 // member access by calling object
        cout << name << "\n";       // direct access to calling object members
    }
};

int main() {
    cout << endl;

    Course c1{};
    c1.setName("ET580");            // member functions require a calling object
    c1.output();                    // member functions require a calling object

    cout << endl;

    Course c2{};
    c2.setName("ET574");            // member functions require a calling object
    c2.output();                    // member functions require a calling object

    cout << endl;
    return 0;
}
