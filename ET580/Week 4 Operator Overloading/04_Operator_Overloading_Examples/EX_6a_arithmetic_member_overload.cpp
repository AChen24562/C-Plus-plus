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
        return Number(num + rhs.num);    // return a new temporary object which is the sum of the calling/parameter objects
    }

private:
    double num;
};

int main() {
    cout << endl;

    // summing integers, note that original integers are not modified
    int x=5, y=10;
    cout << (x+y) << "\n";
    cout << x << "\n";
    cout << y << "\n";
    cout << (x+y+x+x) << "\n\n";

    Number a{3.25}, b{2.1};

    // a is the calling object, b parameter object, a and b are not modified
    (a+b).output();

    // operator chaining, one operation is processed at a time
    // (a+b+a+b) - the last a+b resolve to temporary object c
    // (a+b+c)   - b+c resolve to temporary object d
    // (a+d)     - finally a+d where d is the result of all other operations
    (a+b+a+b).output();

    cout << "\n";
    a.output();
    b.output();
    cout << "\n\n";

    cout << endl;
    return 0;
}
