// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
public:
    int number;                       // public data member
    Course(): Course(0) { }
    Course(int n): number(n) { }
    int getNumber() const { return number;}
};

int main() {
    cout << endl;

    Course *c = new Course{};           // dynamic object

    (*c).number = 580;                  // dereference pointer to access object data
    cout << (*c).getNumber() << "\n";   // dereference pointer to access object functions

    c->number = 585;                    // dereference pointer to access object data
    cout << c->getNumber() << "\n\n";   // dereference pointer to access object functions

    cout << endl;
    return 0;
}
