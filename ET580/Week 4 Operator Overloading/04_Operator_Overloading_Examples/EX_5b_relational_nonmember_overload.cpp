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

// binary relational non-member operator overload (==,!=,<,>,<=,>=)
// two parameters, one for each operand, left hand side is first, right hand side second
bool operator>(const Number &lhs, const Number &rhs) {
    return (lhs.getNumber() > rhs.getNumber()); // accessor required to access data
}

int main() {
    cout << endl;

    Number a{3.25}, b{2.1};

    // both objects are parameter objects
    cout << (a>b) << "\n";
    cout << (b>a) << "\n";

    // comparing memory addresses, does not require an operator overload
    cout << (&a==&a) << endl;

    cout << endl;
    return 0;
}
