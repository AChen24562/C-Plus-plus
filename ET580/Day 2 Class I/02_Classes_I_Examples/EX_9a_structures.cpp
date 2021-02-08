// S. Trowbridge 2020
#include <iostream>
using namespace std;

// class members are private by default
class Course {

    string name;    // members are private by default

public:             // public area must be specified
    string professor;

    Course() {
        name = "Unnamed";
        professor = "Unknown";
    }
    void setName(string n) { name = n; }
    string getName() { return name; }

};

int main() {
    cout << endl;

    Course c1{};

    c1.professor = "Dr. Jones";
    c1.setName("ET574");
    cout << c1.getName() << "\n";
    cout << c1.professor << "\n";

    cout << endl;
    return 0;
}
