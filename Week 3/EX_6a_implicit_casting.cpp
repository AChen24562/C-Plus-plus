// (c) S. Trowbridge
// Ex 6a -  Implicit Casting

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i;
    float f;

    i = 10;
    f = i; // the number 10.0 is stored into f (cast conversion)
    cout << "Implicit Cast: int to float" << endl;
    cout << "---------------------------" << endl << endl;
    cout << "Value of i is " << i << endl;
    cout << "Value of f is " << f << endl << endl;
    cout << endl;


    f = 2.5;
    i = f; // the number 2 gets stored in i (cast conversion), the .5 is lost
    cout << "Implicit Cast: float to int" << endl;
    cout << "---------------------------" << endl << endl;
    cout << "Value of i is " << i << endl;
    cout << "Value of f is " << f << endl << endl;

    return 0;
}
