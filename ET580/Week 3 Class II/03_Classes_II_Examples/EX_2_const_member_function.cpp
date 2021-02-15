// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
private:
    int number;
    string professor;
public:
    Course(): number(0), professor("Staff") { }

    // const member functions
    // calling object is made const within the function (cannot be edited)
    int getNumber() const { return number; }
    string getProfessor() const { return professor; }

    // COMPILER ERROR - illegal const member function, attempts to modify the calling object
    // void badFunction() const { number = 580; }
};

int main() {
    cout << endl;

    Course c1{};
    cout << c1.getNumber() << "\n";
    cout << c1.getProfessor() << "\n";

    cout << endl;
    return 0;
}
