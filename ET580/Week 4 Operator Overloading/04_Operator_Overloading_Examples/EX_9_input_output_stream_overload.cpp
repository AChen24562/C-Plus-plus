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

    // friend stream operator overloads
    friend ostream& operator <<(ostream &out, const Number &n);
    friend istream& operator >>(istream &in, Number &n);

private:
    double num;
};

// ostream object as a parameter, number object as a parameter
ostream& operator <<(ostream &out, const Number &n) {
    out << n.num;
    return out;
}

// istream object as a parameter, number object as a parameter
istream& operator >>(istream &in, Number &n) {
    // Could also just be in >> n.num;
    double value;
    in >> value;   // an extra step if one wishes to format data before storing
    n.num = value; // could all just be in >> n.num;
    return in;
}

int main() {
    cout << endl;

    Number a{3.25}, b{2.1};
    cout << a << " " << b << endl;

    Number c{};
    cout << "\nEnter a number: ";
    cin >> c >> b;
    cout << a << " " << b << " " << c << endl;

    cout << endl;
    return 0;
}
