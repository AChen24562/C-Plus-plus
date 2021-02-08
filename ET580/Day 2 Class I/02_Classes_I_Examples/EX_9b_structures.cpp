// S. Trowbridge 2020
#include <iostream>
using namespace std;

// structure members are public by default
struct Course {

    string professor;    // members are public by default

    Course() {
        name = "Unnamed";
        professor = "Unknown";
    }
    void setName(string n) { name = n; }
    string getName() { return name; }

private:
      string name;      // private area must be specified
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
