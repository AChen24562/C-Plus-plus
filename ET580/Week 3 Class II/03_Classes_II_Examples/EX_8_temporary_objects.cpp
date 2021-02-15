// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
public:
    Course(): number(20) {}
    Course(int n): number(n) {}
    int getNumber() const { return number; }
private:
    int number;
};

// return an object by value
Course f1() {
    Course o{5};   // o goes out of scope at end of function
    return o;      // return a temporary copy of o
}

int main() {
    cout << endl;

    // construct a temporary object
    Course{};

    // function that returns by value, returns a temporary object
    f1();

    // copy the temporary object contents to c1
    Course c1 = f1();

    // print value copied from object o, to a temp object, to object c1
    cout << c1.getNumber() << endl;

    cout << endl;
    return 0;
}
