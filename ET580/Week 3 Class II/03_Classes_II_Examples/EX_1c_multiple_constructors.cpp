// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
public:
    int number;
    string professor;

    // default constructor
    Course(): number(0), professor("Staff") {
        cout << "default constructor\n";
    }
    // one-parameter constructor
    Course(int n): number(n), professor("Staff") {    // copy n to number
        cout << "one-parameter constructor\n";
    }
    // two-parameter constructor
    Course(int n, string p): number(n), professor(p) { // copy n to number, p to professor
        cout << "two-parameter constructor\n";
    }
};

int main() {
    cout << endl;

    Course c1{};                    // call default constructor
    cout << c1.number << "\n";
    cout << c1.professor << "\n\n";

    Course c2{580};                 // call one-parameter constructor
    cout << c2.number << "\n";
    cout << c2.professor << "\n\n";

    Course c3{580, "Dr. Smith"};    // call two-parameter constructor
    cout << c3.number << "\n";
    cout << c3.professor << "\n\n";

    cout << endl;
    return 0;
}
