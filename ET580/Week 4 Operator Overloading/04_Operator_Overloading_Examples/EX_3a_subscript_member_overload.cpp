// S. Trowbridge 2020
#include <iostream>
#include <cassert>  // enable assert
using namespace std;

class Set {
public:
    void output() const {
        for(int i=0; i<5; ++i) { cout << values[i] << " "; }
        cout << "\n\n";
    }

    // [] operator used to read and write to the object's internal array
    int& operator[](int index) {            // input array index
        assert(index >=0 && index <=4);     // print error if condition false
        return values[index];               // return the value
    }

    // read only version for const objects
    const int& operator[](int index) const {
        assert(index >=0 && index <=4);
        return values[index];
    }

private:
    int values[5] = {10,20,30,40,50};
};


int main() {
    cout << endl;

    Set s1{};
    s1.output();

    // modify internal array and output results
    s1[0] = 100;
    s1[1] = 200;
    cout << s1[0] << "\n";
    cout << s1[1] << "\n";
    cout << s1[2] << "\n";
    cout << s1[3] << "\n";
    cout << s1[4] << "\n\n";

    const Set s2{}; // create a read-only object
    s2.output();
    //s2[0] = 500; // COMPILER ERROR - read only object
    //s2[1] = 600; // COMPILER ERROR - read only object
    cout << s2[0] << "\n";
    cout << s2[1] << "\n";
    cout << s2[2] << "\n";
    cout << s2[3] << "\n";
    cout << s2[4] << "\n";

    cout << endl;
    return 0;
}
