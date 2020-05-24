// (c)S. Trowbridge
// Ex 7.2 - complex nested loop

#include <iostream>
#include <string>
using namespace std;

int main()
{

    // 1st shape
    cout << endl << endl
         << "1st Shape: Asterisks" << endl
         << "---------------------" << endl;

    for(int i=0; i < 10; i++)
    {
        for(int j=0; j < 10; j++)
            cout << "* ";
        cout << endl;
    }
    cout << endl;
    cout << "1st Shape: Coordinates (i,j)" << endl;
    for(int i=0; i < 10; i++)

    {
        for(int j=0; j < 10; j++)
             cout << i << "," << j << "  ";
        cout << endl;
    }




    // 2nd shape
    cout << endl << endl << endl << endl
         << "2nd Shape: Asterisks" << endl
         << "---------------------" << endl;

    for(int i=0; i < 10; i++)
    {
        for(int j=i; j < 10; j++)
            cout << "* ";
        cout << endl;
    }
    cout << endl;
    cout << "2nd Shape: Coordinates (i,j)" << endl;
    for(int i=0; i < 10; i++)
    {
        for(int j=i; j < 10; j++)
            cout << i << "," << j << "  ";
        cout << endl;
    }




    // 3rd Shape Alternate

    cout << endl << endl << endl << endl
         << "3rd Shape: Asterisks" << endl
         << "---------------------" << endl;

    for(int i=9; i >= 0; i--)
    {
        for(int j=9; j >= i; j--)
             cout << "* ";
        cout << endl;
    }
    cout << endl;
    cout << "3rd Shape: Coordinates (i,j)" << endl;
    for(int i=9; i >= 0; i--)
    {
        for(int j=9; j >= i; j--)
            cout << i << "," << j << "  ";
        cout << endl;
    }





    // 4th Shape
    cout << endl << endl << endl << endl
         << "4th Shape: Asterisks" << endl
         << "---------------------" << endl;

    for(int i=0; i < 10; i++)
    {
        for(int j=0; j <= i; j++)
             cout << "* ";
        cout << endl;
    }
    cout << endl;
    cout << "4th Shape: Coordinates (i,j)" << endl;
    for(int i=0; i < 10; i++)
    {
        for(int j=0; j <= i; j++)
            cout << i << "," << j << "  ";
        cout << endl;
    }





    // 5th Shape
    cout << endl << endl << endl << endl
         << "5th Shape: Asterisks" << endl
         << "---------------------" << endl;

    for(int i=0; i < 10; i++)
    {
        for(int j=0; j <= i; j++)
        {
            if(j % 2 == 0)
                continue;
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "5th Shape: Coordinates (i,j)" << endl;
    for(int i=0; i < 10; i++)
    {
        for(int j=0; j <= i; j++)
        {
            if(j % 2 == 0)
                continue;
            cout << i << "," << j << "  ";
        }

        cout << endl;
    }







    // 6th Shape
    cout << endl << endl << endl << endl
         << "6th Shape: Asterisks" << endl
         << "---------------------" << endl;

    for(int i=0; i < 7; i++)
    {
        for(int j=0; j < 7; j++)
        {
            if(j % 2 != 0)
            {
                cout << "x ";
                continue;
            }

            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "6th Shape: Coordinates (i,j)" << endl;
    for(int i=0; i < 7; i++)
    {
        for(int j=0; j < 7; j++)
        {
            if(j % 2 != 0)
            {
                cout << i << "X" << j << "  ";
                continue;
            }

            cout << i << "," << j << "  ";
        }
        cout << endl;
    }






    // 7th Shape
    cout << endl << endl << endl << endl
         << "7th Shape: Asterisks" << endl
         << "---------------------" << endl;

    for(int i=0; i < 7; i++)
    {
        for(int j=0; j < 7; j++)
        {
            if(j % 2 != 0 && i % 2 != 0)
            {
                cout << "x ";
                continue;
            }

            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "7th Shape: Coordinates (i,j)" << endl;
    for(int i=0; i < 7; i++)
    {
        for(int j=0; j < 7; j++)
        {
            if(j % 2 != 0 && i % 2 != 0)
            {
                cout << i << "X" << j << "  ";
                continue;
            }

            cout << i << "," << j << "  ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}
