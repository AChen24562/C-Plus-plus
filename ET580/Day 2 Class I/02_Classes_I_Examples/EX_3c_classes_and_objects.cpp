// S. Trowbridge 2020
#include <iostream>
using namespace std;

// class interface
class Course {
public:
    string name;
    string professor;
};

void setName(Course &c, string n) {         // object passed by reference
    c.name = n;
}
void setProfessor(Course &c, string p) {     // object passed by value - INCORRECT
    c.professor = p;
}
void output(Course &c) {                    // object passed by reference
    cout << c.name << "\n";
    cout << c.professor << "\n";
}

int main() {
    cout << endl;

    Course c1{};
    setName(c1,"ET580");
    setProfessor(c1,"Dr Smith");            // professor of c1 is not set, because of pass by value
    output(c1);

    cout << endl;

    Course c2{};
    setName(c2,"ET574");
    setProfessor(c2,"Dr. Jones");           // professor of c2 is not set, because of pass by value
    output(c2);

    cout << endl;
    return 0;
}
