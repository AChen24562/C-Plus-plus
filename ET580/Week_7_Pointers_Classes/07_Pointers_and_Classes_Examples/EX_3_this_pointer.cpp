// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
private:
    int number;
public:
    Course(): Course(0) { }
    Course(int n): number(n) { }
    bool operator ==(const Course& c) const { return this->number == c.number; }
    friend ostream& operator<<(ostream& out, const Course &c);

    void thisPrint() const {
        cout << this << "\n";     // print the pointer to the calling object
        cout << *this << "\n\n";  // print the calling object (requires << overload)
    }
    void thisCompare(Course &c) {
        if( this == &c ) { cout << "Same object" << "\n"; }           // compare memory addresses
        if( *this == c ) { cout << "Equivalent object" << "\n\n"; }   // compare objects (requires == overload)
    }
};

ostream& operator<<(ostream& out, const Course &c) { return (out << c.number); }

int main() {
    cout << endl;

    Course c1{575};
    Course c2{575};

    cout << &c1 << "\n";          // print object memory address
    cout << c1 << "\n\n";         // print object (requires << overload)

    c1.thisPrint();               // do the same thing using "this"

    c1.thisCompare(c1);           // compare c1 with itself
    c1.thisCompare(c2);           // compare c1 with c2

    cout << endl;
    return 0;
}
