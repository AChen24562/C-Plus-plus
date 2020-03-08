#include <iostream>
#include <iomanip>

using namespace std;
int main(){


const int twenty = 20;
const int ten =10;
int dollar;
cout << "Enter a whole dollar amount as an integer: ";
cin >> dollar;

int remainder = dollar %20;


if (dollar % 20 == 0)
    cout << dollar / twenty << " $20 dollar bills"
         << endl << remainder /ten << " $10 Dollar bills" << endl;
else if(remainder %10 ==0)
cout << dollar / twenty << " $20 dollar bills"
     << endl << remainder /ten << " $10 Dollar bills" << endl;
else
  cout << "Invalid" << endl;




  return 0;
}
