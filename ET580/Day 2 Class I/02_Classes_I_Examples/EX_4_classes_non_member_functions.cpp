// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
public:
    string name;
};

// NON-MEMBER functions - DECLARED OUTSIDE of the class
void setName(Course &c, string n) { // member access by parameter object
    c.name = n;                     // dot operator access to object members
}
void output(Course &c) {            // member access by parameter object
    cout << c.name << "\n";         // dot operator access to object members
}

int main() {
    cout << endl;

    Course c1{};
    setName(c1,"ET580");            // non-member functions require a parameter object
    output(c1);                     // non-member functions require a parameter object

    cout << endl;

    Course c2{};
    setName(c2,"ET574");            // non-member functions require a parameter object
    output(c2);                     // non-member functions require a parameter object

    cout << endl;
    return 0;
}
