// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Number {
public:
    Number(): num(0) {}
    Number(int i): num(i) {}

    // prefix overload ++c
    Number& operator++(){      // increment num and return modified object
        ++num;
        return *this;
    }
    // postfix overload c++
    Number operator++(int) {
        Number temp{num};     // copy calling object
        ++num;                // increment calling object
        return temp;          // return the original copy (not incremented)
    }

    friend ostream& operator<<(ostream& out, const Number &c);

private:
    int num;
};

ostream& operator<<(ostream& out, const Number &c) {
    out << c.num;
    return out;
}

int main() {
    cout << endl;

    Number n{5};
    cout << "n:    " << n << endl;
    cout << "n++:  " << n++ << endl;
    cout << "n:    " << n << endl;
    cout << "++n:  " << ++n << endl;

    cout << endl;
    return 0;
}
