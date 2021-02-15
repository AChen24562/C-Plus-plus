// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
public:
    int number;
    string professor;

    // CONSTRUCTOR DELEGATION: constructors can call other constructors
    Course(): Course(0, "Staff") {            // call the two-parameter constructor
        cout << "default constructor\n";
    }
    Course(int n): Course(n, "Staff") {       // call the two-parameter constructor
        cout << "one-parameter constructor\n";
    }
    // all other constructors call this one
    Course(int n, string p): number(n), professor(p) {
        cout << "two-parameter constructor\n";
    }
};

int main() {
    cout << endl;

    Course c1{};      // call the default constructor
    cout << c1.number << "\n";
    cout << c1.professor << "\n\n";

    Course c2{580};   // call a constructor with one parameter
    cout << c2.number << "\n";
    cout << c2.professor << "\n\n";

    Course c3{580, "Dr. Smith"};   // call a constructor with one parameter
    cout << c3.number << "\n";
    cout << c3.professor << "\n\n";

    cout << endl;
    return 0;
}
