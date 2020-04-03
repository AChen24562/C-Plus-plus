// (c) 2017 S. Trowbridge
// Ex 3 - variable scope

#include <iostream>
using namespace std;

int main( ) { // start of main code block
    cout << "Example 1:" << endl;
    cout << "----------" << endl;
    int x = 4;
    cout << "Value of main  x: " << x << endl;
    {                                                 // outer code block starts
        cout << "Value of outer x: " << x << endl;
        {                                                 // inner code block starts
            cout << "Value of inner x: " << x << endl;
        }                                                 // inner code block ends
    }                                                 // outer code lock ends
    cout << "Value of main  x: " << x << endl;
    cout << endl << endl;

    // Example 2
    // If line 27 is enabled, a compiler error will occur.
    // This is because the variable 'k' is only accesible within the code block.
    // This is known as variable 'scope'.
    // We can say that the scope of the variable k beings at 28 and ends at line 29.
    {   // code block starts
        int k = 1;
    }   // code block ends, k is now out of scope
    //cout << k << endl;


    // This example has three variables named 'y'.
    // The scope of each variable is limited to the end of its code block.
    // However, if we reuse a variable name within a nested code block
    // the original variable of same name is hidden and not accessible
    // until the inner code block ends.
    // Generally speaking, it is bad practice to reuse variable names.
    cout << "Example 3:" << endl;
    cout << "----------" << endl;
    int y = 1;
    cout << "Value of main  y: " << y << endl;
    {
        int y = 2; // hides 'y' defined in 41 until end of outer block
        cout << "Value of outer y: " << y << endl;
        {
            int y = 3; // hides 'y' defined in 41 and 44 until end of inner block
            cout << "Value of inner y: " << y << endl;
        }
    }
    cout << "Value of main  y: " << y << endl;
    cout << endl << endl;



    cout << "Example 4:" << endl;
    cout << "----------" << endl;
    cout << "Testing the value of i: " << endl;
    int i=0;
    for(int i=1; i<=10; i++)
    {   // for loop code block
        cout << i << " ";
    }
    cout << "\n\ni is " << i << endl;



    cout << endl;
    return 0;
} // end of main code block
