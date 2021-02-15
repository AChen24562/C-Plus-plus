// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
public:
    int number;
    string professor;

     // if the default constructor is missing, the compiler automatically creates one
};

int main() {
    cout << endl;

    Course c1{};                    // call the default constructor
    cout << c1.number << "\n";      // prints 0, the default value for integers
    cout << c1.professor << "\n";   // prints "", the default value for strings

    cout << endl;
    return 0;
}
