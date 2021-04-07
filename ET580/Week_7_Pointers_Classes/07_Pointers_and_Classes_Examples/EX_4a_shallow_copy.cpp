// S. Trowbridge 2020
#include <iostream>
using namespace std;

// SHOULD ONLY WORRY ABOUT SHALLOW COPIES IF YOU HAVE DYNAMIC DATA MEMBERS
//
//
// LINE 12

class Course {
private:
    int *number;                            // dynamic data member
public:
    Course(): Course(0) { }
    Course(int n): number(new int(n)) { }   // initialize dynamic memory
    void shallowCopy(const Course &c);
};

// shallow copy copies pointers from one object to another object, objects share data
void Course::shallowCopy(const Course &c) {
    cout << number << "\n";
    cout << c.number << "\n";
    cout << *number << "\n";
    cout << *(c.number) << "\n\n";

    number = c.number;                      // copy pointer values (memory addresses of data)

    cout << number << "\n";
    cout << c.number << "\n";
    cout << *number << "\n";
    cout << *(c.number) << "\n";
}

int main() {
    cout << endl;

    Course c1(580);
    Course c2(575);

    c1.shallowCopy(c2);

    cout << endl;
    return 0;
}
