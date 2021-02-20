// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Number {
public:
    Number(): Number(0) { }
    Number(double n): num(n) { }
    void output() const { cout << num << endl; }

    // binary arithmetic member operator overload (+,-,/,*,%)
    Number operator+(const Number &rhs) const {
        return Number(num + rhs.num);
    }

private:
    double num;
};

int main() {
    cout << endl;

    Number a{3.25}, b{2.1};

    // automatic type conversion
    // a is the calling object, b is an integer parameter
    // b is automatically converted into an object of type Number,
    // because there is a constructor that accepts a single integer parameter: Number(double n)
    (a+5).output();

    // compiler error: automatic type conversion does not work in this instance
    // a is an integer (not a callign object), b is a parameter object
    // compiler cannot identify which function to call, is it int+int or Number+Number
    //(5+b).output();

    cout << endl;
    return 0;
}
