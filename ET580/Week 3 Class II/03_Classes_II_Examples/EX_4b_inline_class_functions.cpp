// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Course {
private:
    int number;
    string professor;
public:
    // member functions defined INSIDE the class are automatically INLINE
    Course(): number(0), professor("Staff") { }     // inline (defined internally)
    int getNumber() const { return number; }        // inline (defined internally)

    // member functions defined OUTSIDE of the class are OUT-OF-LINE
    string getProfessor() const;                    // out of line (defined externally)
};

// externally defined out-of-line function call
string Course::getProfessor() const {
    return professor;
}

int main() {
    cout << endl;

    Course c1{};
    cout << c1.getNumber() << "\n";
    cout << c1.getProfessor() << "\n";

    cout << endl;
    return 0;
}
