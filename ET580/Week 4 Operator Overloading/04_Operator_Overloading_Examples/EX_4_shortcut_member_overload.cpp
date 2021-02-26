// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Number {
public:
    Number(): Number(0) { }
    Number(double n): num(n) { }
    void output() const { cout << num << endl; }

    // binary shortcut member operator shortcut overload,
    // *this is another name for the calling object, which is returned by reference
    Number& operator+=(const Number &rhs) {
        num += rhs.num;

        // Name for the calling object 'a'
        return *this;   // return the modified calling object (hence by reference)
    }

private:
    double num;
};

int main() {
    cout << endl;

    // += integers, the left operand x is modified because this is an assignment
    int x=5, y=10;
    cout << (x+=y) << "\n";
    cout << x << "\n";
    cout << y << "\n\n";

    Number a{3.25}, b{2.1};

    // a is the calling object, b parameter object, a is modified
    (a+=b).output();

    cout << "\n";
    a.output();
    b.output();
    cout << "\n";

    cout << endl;
    return 0;
}
