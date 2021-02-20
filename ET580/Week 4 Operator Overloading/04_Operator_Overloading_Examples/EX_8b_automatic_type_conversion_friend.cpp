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

    // friend binary arithmetic member operator overloads (+,-,/,*,%)
    friend Number operator+(const Number &lhs, const Number &rhs);
    friend Number operator-(const Number &lhs, const Number &rhs);

private:
    double num;
};

// friend binary arithmetic member operator overload (+,-,/,*,%)
Number operator+(const Number &lhs, const Number &rhs) {
    return Number(lhs.num + rhs.num);
}
// friend binary arithmetic member operator overload (+,-,/,*,%)
Number operator-(const Number &lhs, const Number &rhs) {
    return Number(lhs.num - rhs.num);
}

int main() {
    cout << endl;

    Number a{3.25}, b{2.1};

    // automatic type conversion
    // a and b are parameter objects (no calling object for non-members)
    // b is automatically converted into an object of type Number,
    // because there is a constructor that accepts a single integer parameter: Number(double n)
    (a+5).output();

    // automatic type conversion
    // this works because neither a nor b is a calling object, both are parameter objects
    // a is automatically converted into an object of type Number,
    // because there is a constructor that accepts a single integer parameter: Number(double n)
    (5+b).output();

    // Note: This approach also works for chaining operations with automatic type conversion.
    (5+b+10-3+a).output();

    cout << endl;
    return 0;
}
