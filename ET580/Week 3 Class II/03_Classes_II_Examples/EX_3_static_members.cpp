// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
private:
    int number;
    string professor;

    // static data members (belong to the class itself, not to class objects)
    static int numCourses;              // the number of instantiated Course objects
    static const int maxStudents = 30;  // const maximum number of students per course

public:
    // constructors increment numCourses whenever a new Course object is created
    Course(): Course(0, "Staff") { }
    Course(int n, string p): number(n), professor(p) { ++numCourses; }

    // object accessors (return object data)
    int getNumber() const { return number; }
    string getProfessor() const { return professor; }

    // class accessors (return static class data)
    static int getNumCourses() { return numCourses; }
    static int getMaxStudents() { return maxStudents; }
};

// non-const static members must be defined externally
int Course::numCourses = 0;

int main() {
    cout << endl;

    Course c1{};
    cout << c1.getNumber() << "\n";
    cout << c1.getProfessor() << "\n\n";

    Course c2{580, "Dr. Smith"};
    cout << c2.getNumber() << "\n";
    cout << c2.getProfessor() << "\n\n";

    cout << Course::getNumCourses() << " courses" << endl;  // normal, call a static member from the class itself
    cout << c2.getMaxStudents() << " max of students per course" << endl; // legal, can call from an instance

    //cout << Course::getNumber() << "\n"; // illegal, cannot call an instance function from the class

    cout << endl;
    return 0;
}
