// S. Trowbridge 2020
#include <iostream>
using namespace std;

// class interface
class Course {
public:
    string name;
};

void setName(Course &c, string n) {         // object passed by reference
    c.name = n;                             // dot operator access to name inside c
}
void output(Course &c) {                    // object passed by reference
    cout << c.name << "\n";                 // dot operator access to name inside c
}

int main() {
    cout << endl;

    Course c1{};
    setName(c1,"ET580");
    output(c1);
    cout << c1.name << "\n";                // dot operator access to name inside c1

    cout << endl;

    Course c2{};
    setName(c2,"ET574");
    output(c2);
    cout << c2.name << "\n";                // dot operator access to name inside c2

    cout << endl;
    return 0;
}
