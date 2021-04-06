// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
private:
    int number;
public:
    Course(): number(0) {
        cout << "def constructor   " << endl;
    }
    Course(const Course &c): number(c.number) {
        cout << "copy constructor   " << endl;
    }
    Course& operator=(const Course &c) {
        cout << "assignment operator overload" << endl;
        number = c.number;
        return *this;
    }
};

void passByValue(Course c) { }        // accept an object via pass by value

Course returnByValue() {              // return temporary by value
    return Course{};
}

int main() {
    cout << endl;

    cout << "CONSTUCT OBJECTS:\n\n";

    Course c1{};                       // call the default constructor
    cout << "\n";

    Course c2 = c1;                    // call the copy constructor
    cout << "\n";
                                       // memory optimization
    Course c3 = Course{};              // call the default constructor (optimized by return value optimization)
    cout << "\n\n\n";                  // the temporary is constructed in the memory space of c3, so no copy occurs,


    cout << "PASS BY VALUE:\n\n";

    passByValue(c1);                    // call the copy constructor
    cout << "\n";
                                        // memory optimization
    passByValue(Course{});              // call the default constructor (optimized by copy elision)
    cout << "\n\n\n";                   // the temporary is constructed in the memory space of c, so no copy occurs



    cout << "RETURN BY VALUE:\n\n";

    c3 = returnByValue();               // call the default constructor, then assignment to copy returned temporary
    cout << "\n";

                                        // memory optimization
    Course c4 = returnByValue();        // call the default constructor (optimized by return value optimization)
    cout << "\n";                       // the temporary is constructed in the memory space of c4, so no copy occurs


    return 0;
}
