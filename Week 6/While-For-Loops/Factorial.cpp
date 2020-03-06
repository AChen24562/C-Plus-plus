//Name
// WK6 - PE

#include <iostream>
using namespace std;

int main()
{
    double n, factorial = 1;

// HW
    do{

    cout << "\n\nEnter a positive value: ";
    cin >> n;
    if(n > 0){ // checking positive and whether integer
        if(n == int(n)){
          break;
        }
        else
          cout << "Invalid input. Please enter an integer." << endl;

    }else
          cout << "Invalid input. Please enter a positive value" <<endl ;





    }while(true);



    //Request an integer value n. Output the sum of all integers from 1 to n.
    for(int i = 1; i <= n; i++)
        factorial *= i;


    cout << n << "! = " << factorial << endl;


    cout << endl;
    return 0;
}
