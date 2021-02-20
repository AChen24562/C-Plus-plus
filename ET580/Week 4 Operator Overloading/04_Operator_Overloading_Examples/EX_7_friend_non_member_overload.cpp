// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Number {
public:
    Number(): Number(0) { }
    Number(double n): num(n) { }
    double getNumber() const { return num; }
    void setNumber(double n) { num = n; }
    void output() const { cout << num << endl; }

    // friend functions are declared in the class,
    // friend functions have full class access, but are NOT member functions

    // friend binary arithmetic non-member operator overload (+,-,/,*,%)
    friend Number operator*(const Number &lhs, const Number &rhs); // friend keyword required for declaration

    // friend binary relational non-member operator overload (==,!=,<,>,<=,>=)
    friend bool operator>(const Number &lhs, const Number &rhs); // friend keyword required for declaration

private:
    double num;
};

// defined just like non-member
Number operator*(const Number &lhs, const Number &rhs) {
    return Number(lhs.num * rhs.num); // friend functions have direct access to data members
}
// defined just like non-member
bool operator>(const Number &lhs, const Number &rhs) {
    return (lhs.num > rhs.num); // friend functions have direct access to data members
}

int main() {
    cout << endl;

    Number a{3.25}, b{2.1};

    // a and b are parameter objects, neither are modified
    (a*b).output();

    // operator chaining, one operation is processed at a time
    (a*b*a*b).output();

    // a and b are parameter objects, neither are modified
    cout << (a>b) << endl;

    cout << endl;
    return 0;
}
