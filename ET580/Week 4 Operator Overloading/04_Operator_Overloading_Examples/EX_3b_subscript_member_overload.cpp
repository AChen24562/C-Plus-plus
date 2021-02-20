// S. Trowbridge 2020
#include <iostream>
#include <cassert>  // enable assertions
using namespace std;

class Name {
public:
    Name(): Name("","") { }
    Name(string f, string l): first(f), last(l) { }
    void output() { cout << first << " " << last << "\n"; }

    // [] operator used to access numerator and denominator
    string& operator[](int index) {
        assert(index >=0 && index <=1);
        if(index == 0)
            return first;
        else
            return last;
    }

    // read only version for const objects
    const string& operator[](int index) const {
        assert(index >=0 && index <=1);
        if(index == 0)
            return first;
        else
            return last;
    }

private:
    string first;
    string last;
};


int main() {
    cout << endl;

    Name n{"John", "Smith"};
    n.output();

    cout << n[0] << "\n";
    cout << n[1] << "\n\n";
    n[0] = "Jane";
    n[1] = "Doe";
    cout << n[0] << "\n";
    cout << n[1] << "\n\n";

    const Name n2{"Jane", "Doe"};  // const objects requires the second version of the function
    cout << n2[0] << "\n";
    cout << n2[1] << "\n\n";
    //n2[0] = "Sara"; // COMPILER ERROR, object is read only

    cout << endl;
    return 0;
}
