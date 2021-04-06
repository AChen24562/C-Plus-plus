// (c) S. Trowbridge 2020
#include <iostream>
#include <time.h>
using namespace std;

class Course {
private:
    int *number;                              // dynamic data member
    string prof;                              // automatic data member
    int *studentIds;                          // dynamic array of studentIDs
    int size;                                 // size of the studentIDs array
public:
    Course(): Course(0, "", 3) { }
    Course(int n, string p): Course(n, p, 3) { }
    Course(int n, string p, int s) : number(new int(n)), prof(p), size(s), studentIds(new int[s]) {
        for(int i=0; i<size; ++i) {
            studentIds[i] = rand()%90+10+i;   // store random values for demonstration
        }
    }
    friend ostream& operator<<(ostream& out, const Course &c);

    Course(const Course &c);                  // copy constructor
    Course& operator=(const Course &c);       // assignment operator overload
    ~Course();                                // destructor
};

Course::Course(const Course &c):              // copy constructor
    number(new int( *(c.number) )),           // initialize heap memory from c
    prof(c.prof),                             // copy professor
    size(c.size),                             // copy size
    studentIds( new int[c.size] )             // initialize a dynamic array with c.size
{
    for(int i=0; i<c.size; ++i) {           // copy array contents from c to *this
        studentIds[i] = c.studentIds[i];
    }
}

Course& Course::operator=(const Course &c) {  // assignment operator overload
    if(this != &c) {                          // only copy if objects are different
        *number = *(c.number);                // deep copy the heap data member
        prof = c.prof;                        // shallow copy the stack data member

        if(size != c.size) {                  // if arrays are different size, delete array
            delete [] studentIds;             // delete original array
            size = c.size;                    // update size
            studentIds = new int[c.size];     // create a new array of new size
        }
        for(int i=0; i<size; ++i) {           // copy the array contents from c to *this
            studentIds[i] = c.studentIds[i];
        }
    }
    return *this;                             // return the calling object by reference
}

Course::~Course() {                           // destructor
    delete number;                            // safely delete dynamic memory
    delete [] studentIds;
}

ostream& operator<<(ostream& out, const Course &c) {
    out << *(c.number) << " " << c.prof << "\n";
    out << "O: " << &c << "\n";               // print object memory address
    out << "N: " << c.number << "\n";         // print number memory address
    for(int i=0; i<c.size; ++i) {
        out << c.studentIds[i] << " ";
        out << &(c.studentIds[i]) << "\n";    // print array element memory address
    }
    return out;
}

int main() {
    cout << endl;

    srand(time(NULL));

    Course c1{580, "Trowbridge"};
    Course c2{575, "Sun"};

    cout << "C1: " << c1 << "\n\n";
    cout << "C2: " << c2 << "\n\n";

    // copy constructor
    Course c3{c2};
    cout << "C3: " << c3 << "\n\n";

    // assignment operator overload
    c1 = c2;
    cout << "C1: " << c1 << "\n\n";

    cout << endl;
    return 0;
}
