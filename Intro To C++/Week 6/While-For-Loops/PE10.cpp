//Name
// WK5 - PE10

#include <iostream>
using namespace std;

int main()
{

    int x = 0, counter =0;

    do{

        //Write a program that request an integer number from 1 to 10 inclusively.
        cout << "Enter an integer value from 1 to 10: ";
        cin >> x;

        //Output the input value and the loop iterations if the integer is in the range.
        //Otherwise, display an error message and repeat the loop until the correct value is entered.
        counter++;
        if (x<1 || x>10){
          cout << "Error" << endl;
        }
        else//(x= (1-10)
          break;
}while(true);

    cout << x << " is valid. Loop iterations = " << counter << endl;
    return 0;

}
