// (c) S. Trowbridge
// Ex 1a - variables c++11/14/17 syntax

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i{5}; // c++11 uniform initialization syntax
    cout << i << endl;

    double d{5.3};  // c++11 uniform initialization syntax
    cout << d << endl;

    char c{'A'};  // c++11 uniform initialization syntax
    c = 'B'; // syntax for assignment is same as c++03
    cout << c << endl;

    string s{"Hello"};  // c++11 uniform initialization syntax
    cout << s << endl;

    bool b{true};  // c++11 uniform initialization syntax
    cout << b << endl;

    return 0;
}
