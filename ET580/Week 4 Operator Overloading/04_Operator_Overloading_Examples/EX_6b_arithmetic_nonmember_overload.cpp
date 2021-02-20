// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Number {
public:
    Number(): Number(0) { }
    Number(double n): num(n) { }
    double getNumber() const { return num; }      // required for non-member read only overloads
    void output() const { cout << num << endl; }
private:
    double num;
};

// binary arithmetic non-member operator overload (+,-,/,*,%)
// two parameters, one for each operand, left hand side is first, right hand side second
Number operator*(const Number &lhs, const Number &rhs) {
    return Number(lhs.getNumber() * rhs.getNumber()); // note direct access to variable num
}

int main() {
    cout << endl;

    Number a{3.25}, b{2.1};

    // a and b are both parameter objects, neither are modified
    (a*b).output();

    (a*b*a*b).output();

    cout << endl;
    return 0;
}
