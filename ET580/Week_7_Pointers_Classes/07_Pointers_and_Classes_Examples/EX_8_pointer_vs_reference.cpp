// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
public:
    int number;                 // public data member
    Course(): Course(0) { }
    Course(int n): number(n) { }
    int getNumber() const { return number;}
};

void output(Course *x) { cout << x->number << "\n"; } // pass object by pointer (increased chance of memory errors)
void output(Course &x) { cout << x.number << "\n"; }  // pass object by reference (optimal)

int main() {
    cout << endl;

    Course *c1 = new Course{};   // heap object

    output(c1);                  // pass heap object by pointer

    output(*c1);                 // pass heap object by reference


    Course c2;                  // stack object

    output(&c2);                // pass stack object by pointer

    output(c2);                 // pass stack object by reference

    cout << endl;
    return 0;
}
