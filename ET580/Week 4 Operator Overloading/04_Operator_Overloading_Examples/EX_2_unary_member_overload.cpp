// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Number {
public:
    Number(): Number(0) { }
    Number(double n): num(n) { }
    void output() const { cout << num << "\n"; }

    // unary - member operator overload
    // return a temporary object which is a negated copy of the calling object
    Number operator-() const {
        return Number(-num);
    }

private:
    double num;
};

int main() {
    cout << endl;

    // negation upon an integer, note that the original integer is not modified
    int x = 5;
    cout << -x << "\n";
    cout << x << "\n\n";

    // a is the calling object, note that a is not modified
    Number a{3.25};
    (-a).output();
    a.output();

    cout << endl;
    return 0;
}
