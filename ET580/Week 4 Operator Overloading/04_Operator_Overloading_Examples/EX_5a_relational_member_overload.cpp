// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Number {
public:
    Number(): Number(0) { }
    Number(double n): num(n) { }
    void output() const { cout << num << endl; }

    // binary relational member operator overload (==,!=,<,>,<=,>=)
    bool operator==(const Number &rhs) const {
        return num == rhs.num;          // return true or false
    }

private:
    double num;
};

int main() {
    cout << endl;

    Number a{3.25}, b{2.1}, c{3.25};

    // a is the calling object, b parameter object, a and b are not modified
    cout << (a==b) << endl;
    // a is the calling object, c parameter object, a and c are not modified
    cout << (a==c) << endl;

    cout << "\n";
    a.output();
    b.output();
    c.output();
    cout << "\n";

    cout << endl;
    return 0;
}
