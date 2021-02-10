// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
public:
    string name;
    string professor;

    // constructors - used to initialize data members of the new object
    Course() {
        name = "Unnamed";
        professor = "Unknown";
    }

    // accessors - used to read an object
    string getName() { return name; }
    string getProfessor() { return professor; }

    // mutators - used to modify an object or setters
    void setName(string n) { name = n; }
    void setProfessor(string p) { professor = p; }

};

int main() {
    cout << endl;

    Course c1{};                        // call a constructor to create object c1
    c1.setProfessor("Dr. Jones");       // call a mutator for object c1
    c1.setName("ET574");                // call a mutator for object c1
    cout << c1.getName() << "\n";       // call an accessor for object c1
    cout << c1.getProfessor() << "\n";  // call an accessor for object c1

    cout << endl;
    return 0;
}
