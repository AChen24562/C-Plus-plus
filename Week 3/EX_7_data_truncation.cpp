// (c) S. Trowbridge & J. Sun
// Ex 7 - Casting Data Truncation

#include <iostream>
using namespace std;

int main()
{
    // This is an example of information loss as a result of implicit casting.
    const float PI = 3.14159265359;
    int truncated_PI = PI; // the number 3 is stored into truncated_PI
    double area = 0;
    cout << "Implicit Casting" << endl;
    cout << "----------------" << endl << endl;
    cout << "PI is approximately " << PI << ".\n\n";
    area = PI * 10 * 10;
    cout << "Area  = " << area << endl;

    cout << "----------------" << endl << endl;
    cout << "An implicit cast truncates PI to " << truncated_PI << ".\n";
    area = truncated_PI * 10 * 10;
    cout << "Area  = " << area << endl;

    cout << endl;
    return 0;
}
