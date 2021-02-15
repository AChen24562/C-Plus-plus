// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
private:
    // nested class (class within a class)
    class Professor {
    public:
        Professor(): name("Staff") {}
        Professor(string p): name(p) {}
        string name;
    };
    int number;
    Professor prof;   // must be declared after nested class so Professor type is known
public:
    Course(): number(0) { }
    int getNumber() const { return number; }
    string getProfessor() const { return prof.name; }
};

int main() {
    cout << endl;

    Course c1{};
    cout << c1.getNumber() << "\n";
    cout << c1.getProfessor() << "\n";

    cout << endl;
    return 0;
}
