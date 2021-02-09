// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
private:                                          // private area only accessible by class member functions (ENCAPSULATION)
    string name;                                  // private member

public:                                           // public area accessible anywhere (ENCAPSULATION)
    string professor;                             // public member

    Course() {
        name = "Unnamed";
        professor = "Unknown";
    }
    void setName(string n) { name = n; }          // mutators provide access to private data members
    string getName() { return name; }             // accessors provide access to private data members
};

int main() {
    cout << endl;

    Course c1{};

    c1.setName("ET580");                          // legal access to name through the public mutator
    c1.professor = "Dr. Smith";                   // legal access to professor because variable is public

    cout << c1.getName() << "\n";                 // legal access to name through the public accessor
    cout << c1.professor << "\n";                 // legal access to professor because variable is public

    cout << c1.name << "\n\n";                  // illegal access to name variable is private (compiler error)

    cout << endl;
    return 0;
}
