// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
public:
    string name;

    // member functions DECLARED AND DEFINED within the class
    Course() { name = "Unnamed"; }
    void setName(string n) { name = n; }
};

// non-member output function
void output(Course &c) {
    cout << "Course\t\t" << c.name << "\n";
}

int main() {
    cout << endl;

    Course c1{};
    c1.setName("ET580");
    output(c1);

    cout << endl;
    return 0;
}
