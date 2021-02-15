// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
public:
    int number;
    string professor;

    Course();
    Course(int n);
    Course(int n, string p);
};

// constructors externally defined
Course::Course(): Course(0, "Staff") {
    cout << "default constructor\n";
}
Course::Course(int n): Course(n, "Staff") {
    cout << "one-parameter constructor\n";
}
Course::Course(int n, string p): number(n), professor(p) {
    cout << "two-parameter constructor\n";
}

int main() {
    cout << endl;

    Course c1{};
    cout << c1.number << "\n";
    cout << c1.professor << "\n\n";

    Course c2{580};
    cout << c2.number << "\n";
    cout << c2.professor << "\n\n";

    Course c3{580, "Dr. Smith"};
    cout << c3.number << "\n";
    cout << c3.professor << "\n";

    cout << endl;
    return 0;
}
