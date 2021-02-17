// S. Trowbridge 2020
#include <iostream>
using namespace std;

// Professor must be declared first
class Professor {
private:
    string name;
public:
    Professor(): name("Staff") {}
    Professor(string n): name(n) {}
    string getName() const { return name; }
    void setName(string n) { name = n; }
};

// Course must be declared second, after Professor type is known
class Course {
private:
    int number;
    Professor prof; // Course contains a member of type Professor
public:
    Course(): number(0), prof() { }                         // prof() calls Professor default constructor
    Course(int n): number(n), prof() { }                    // prof() calls Professor default constructor
    Course(int n, string p): number(n), prof(p) { }         // prof(p) calls Professor one-parameter constructor

    // Copy constructor
    Course(int n, Professor &o): number(n), prof(o) { }     // Professor object is COPIED BY VALUE to prof
    int getNumber() const { return number; }
    string getProfessor() const { return prof.getName(); }  // call the Professor name accessor

    Professor& getProfObj() { return prof; }                // included for demonstration purposes
};

int main() {
    cout << endl;

    Course c1{};
    cout << c1.getNumber() << "\n";
    cout << c1.getProfessor() << "\n\n";

    Course c2{580, "Dr. Smith"};
    cout << c2.getNumber() << "\n";
    cout << c2.getProfessor() << "\n\n";

    // Composition by value - lifetimes of objects are dependent
    // If c2 goes out of scope so does c2.prof

    Professor p1{"Dr. Jones"};            // create a Professor object p1
    cout << &p1 << "\n\n";                // print memory address of p1

    Course c3{574, p1};                   // create c2 using object p1
    cout << c3.getNumber() << "\n";
    cout << c3.getProfessor() << "\n";

    cout << &(c3.getProfObj()) << "\n";   // print memory address of c2.prof (different from p1)

    cout << endl;
    return 0;
}
