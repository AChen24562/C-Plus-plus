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

int main() {
    cout << endl;

    Course{};                     // call the def constructor
    cout << "\n\n";

    Course c1{};                  // call the def constructor
    cout << "\n\n";

    Course c2{c1};                // call the copy constructor
    cout << "\n\n";

    Course c3 = c1;               // call the copy constructor
    cout << "\n\n";

    c1 = c2;                      // call assignment overload operator
    cout << "\n\n";

    return 0;
}
