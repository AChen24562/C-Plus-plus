//Name
// WK6 - PE

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "\n\nEnter a value: ";
    cin >> n;
    cout << "Sum of all integers from 1 to " << n;

    //Request an integer value n. Output the sum of all integers from 1 to n.
    for(int i = 1; i <= n; i++)
    sum += i;


    cout << " = " << sum << endl;


    cout << endl;
    return 0;
}
