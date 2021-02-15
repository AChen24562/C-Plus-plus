// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Professor {
private:
    string name;
public:
    Professor(): name("Staff") {}
    Professor(string n): name(n) {}
    string getName() const { return name; }
    void setName(string n) { name = n; }
};

class Course {
private:
    int number;
    Professor &prof;
public:
    Course(Professor &o): number(0), prof(o) { }            // Professor object is COPIED BY REFERENCE to prof
    Course(int n, Professor &o): number(n), prof(o) { }     // Professor object is COPIED BY REFERENCE to prof
    int getNumber() const { return number; }
    string getProfessor() const { return prof.getName(); }
    Professor& getProfObj() { return prof; }
};

int main() {
    cout << endl;

    // Composition by reference - lifetimes of objects are independent
    // If c2 goes out of scope, c2.prof lives on as p1

    Professor p1{"Dr. Jones"};            // create a Professor object p1
    cout << &p1 << "\n\n";                // print memory address of p1

    Course c2{574, p1};                   // create c2 using object p1
    cout << c2.getNumber() << "\n";
    cout << c2.getProfessor() << "\n";

    cout << &(c2.getProfObj()) << "\n";   // print memory address of c2.prof (same as p1)

    cout << endl;
    return 0;
}
