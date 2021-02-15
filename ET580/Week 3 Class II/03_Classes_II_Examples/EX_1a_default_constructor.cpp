// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
public:
    int number;
    string professor;

     // default constructor initializes data member values with an initialization list
     Course(): number(0), professor("Staff") {  // assign the value 0 to number, "Staff" to professor
     }
};

int main() {
    cout << endl;

    Course c1{};                    // call the default constructor
    cout << c1.number << "\n";      // prints the value assigned by the default constructor
    cout << c1.professor << "\n";   // prints the value assigned by the default constructor

    cout << endl;
    return 0;
}
