// (c) S. Trowbridge
// Ex 6b -  Explicit Casting

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Ex 1: Explicit Casting" << endl;
    cout << "-----------------------" << endl << endl;

    // integer division (implicit cast)
    float f;
    f = 10 / 3; // This cast occurs automatically (potentially dangerous).
    cout << "Value of f is " << f << endl << endl;

    // explicit cast to floating point
    f = static_cast<double>(10) / 3; // This cast is specified by the coder.
    cout << "Value of f is " << f << endl << endl << endl;



    cout << "Ex 2: Explicit Casting" << endl;
    cout << "-----------------------" << endl << endl;

    char c = 'A';
    int i = static_cast<int>(c);
    cout << "Value of i is " << i << endl << endl;

    c = static_cast<char>(i);
    cout << "Value of c is " << c << endl << endl << endl;



    cout << "Ex 3: Ascii Table Case Conversion" << endl;
    cout << "------------------------------------" << endl << endl;

    c = 'S';
    cout << "Value of c is " << c << endl << endl;

    i = static_cast<int>(c);
    cout << "Value of i is " << i << endl << endl;

    i = i + 32;
    cout << "Value of i is " << i << endl << endl;

    c = static_cast<char>(i);
    cout << "Value of c is " << c << endl << endl;

    cout << endl;
    return 0;
}
