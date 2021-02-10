// S. Trowbridge 2020
#include <iostream>
using namespace std;

// class interface
class Course {                              // class name
public:                                     // ignore for now
    string name;                            // data member
};                                          // ends with a semi-colon

void setName(Course &c, string n) {
    c.name = n;
}
void output(Course &c) {
    cout << c.name << "\n";
}

int main() {
    cout << endl;

    // Instance of course
    Course c1{};                            // INSTANTIATE an object of type Course named c1
    cout << &c1 << endl;                    // print the memory address of object c1
    setName(c1,"ET580");                    // modify object c1
    output(c1);                             // print object c1

    cout << endl;

    // Instance of course
    Course c2{};                            // INSTANTIATE a second object of type Course named c2
    cout << &c2 << endl;                    // print the memory address of object c2
    setName(c2,"ET574");                    // modify object c2
    output(c2);                             // print object c2

    cout << endl;
    return 0;
}
