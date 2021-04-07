// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
private:
    int *number;                              // dynamic data member
    string prof;                              // automatic data member
public:
    Course(): Course(0, "") { }
    Course(int n, string p): number(new int(n)), prof(p) { }
    friend ostream& operator<<(ostream& out, const Course &c);

    Course(const Course &c);                  // copy constructor
    Course& operator=(const Course &c);       // assignment operator overload
    ~Course();                                // destructor
};

// Copy
Course::Course(const Course &c):              // copy constructor
    number(new int( *(c.number) )),           // initialize dynamic memory
    prof(c.prof)                              // initialize automatic memory
{}
// Assignment
Course& Course::operator=(const Course &c) {  // assignment operator overload
    if(this != &c) {                          // only copy if objects are different
        *number = *(c.number);                // deep copy the heap data member
        prof = c.prof;                        // shallow copy the stack data member
    }
    return *this;                             // return the calling object by reference
}
// Delete
Course::~Course() {                           // destructor
    delete number;                            // safely delete dynamic memory
}

ostream& operator<<(ostream& out, const Course &c) {
    out << *(c.number) << " " << c.prof << "\n";
    out << "O: " << &c << "\n";               // print object memory address
    out << "N: " << c.number << "\n";         // print number memory address
    return out;
}

int main() {
    cout << endl;

    Course c1{580, "Trowbridge"};
    Course c2{575, "Sun"};
    Course c3{574, "An"};

    cout << "C1: " << c1 << "\n";
    cout << "C2: " << c2 << "\n\n";

    c1 = c2;                                  // overloaded assignment operator

    cout << "C1: " << c1 << "\n";
    cout << "C2: " << c2 << "\n\n";

    Course c4{c3};                            // overloaded copy constructor

    cout << "C3: " << c3 << "\n";
    cout << "C4: " << c4 << "\n";

    cout << endl;
    return 0;
}
