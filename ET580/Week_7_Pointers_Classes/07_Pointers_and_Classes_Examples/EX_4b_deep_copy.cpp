// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
private:
    int *number;                            // dynamic data member
public:
    Course(): Course(0) { }
    Course(int n): number(new int(n)) { }   // initialize dynamic memory
    void deepCopy(const Course &c);
};

// deep copy copies data from one object to another object, objects stay separate
void Course::deepCopy(const Course &c) {
    cout << number << "\n";
    cout << c.number << "\n";
    cout << *number << "\n";
    cout << *(c.number) << "\n\n";

    *number = *(c.number);                // derefence both pointers to copy the data

    cout << number << "\n";
    cout << c.number << "\n";
    cout << *number << "\n";
    cout << *(c.number) << "\n";
}

int main() {
    cout << endl;

    Course c1(580);
    Course c2(575);

    c1.deepCopy(c2);

    cout << endl;
    return 0;
}
