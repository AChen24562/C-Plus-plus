// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
private:
    int number;
public:
    Course(): Course(0) { }
    Course(int n): number(n) { }
    bool operator ==(const Course& c) const { return number == c.number; }
};

int main() {
    cout << endl;

    Course c1{580};                    // automatic objects
    Course c2{580};                    // automatic objects

    cout << (&c1 == &c2) << "\n";      // check if same object (compare memory address)
    cout << (c1 == c2) << "\n\n";      // check if an equivalent object (requires == overload)


    Course *c3 = new Course{580};      // dynamic objects
    Course *c4 = new Course{580};      // dynamic objects
    Course *c5 = c4;

    cout << c3 << "\n";                // print pointer value
    cout << c4 << "\n";                // print pointer value
    cout << c5 << "\n\n";              // print pointer value

    cout << (c3 == c4) << "\n";        // check if same object (compare memory address)
    cout << (c4 == c5) << "\n\n";      // check if same object (compare memory address)

    cout << (*c3 == *c4) << "\n";      // check if an equivalent object (requires == overload)
    cout << (*c4 == *c5) << "\n\n";    // check if an equivalent object (requires == overload)

    cout << endl;
    return 0;
}
