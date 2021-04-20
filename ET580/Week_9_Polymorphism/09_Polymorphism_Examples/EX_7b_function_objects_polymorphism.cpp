// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Maths {                             // abstract class
public:
    virtual int operator()(int n) = 0;    // pure virtual function
};

class Summation: public Maths {           // child class implements a functor
public:
    int operator()(int n) override {      // calculate summation of n
        int s=0;
        for(int i=1; i<=n; ++i) { s+=i; }
        return s;
    }
};

class Factorial: public Maths  {          // child class implements a functor
public:
    int operator()(int n) override {      // calculate n factorial
        if(n==1) return 1;
        return (*this)(n-1)*n;            // recursive function call of a functor
    }
};

int math_func(int n, Maths *m) {          // accepts a Maths object
    return (*m)(n);                       // use the functor on parameter n
}

int main() {
    cout << endl;

    Factorial f{};
    Summation s{};
    cout << s(5) << "\n";                 // call s() overload (behaves like a summation function)
    cout << f(5) << "\n\n";               // call f() overload (behaves like a factorial function)

    Maths *m;
    m = new Summation();                  // function object using polymorphism
    cout << math_func(5, m) << "\n";      // calculate summation of 5

    m = new Factorial();                  // function object  using polymorphism
    cout << math_func(5, m) << "\n";      // calculate 5 factorial

    cout << endl;
    return 0;
}
