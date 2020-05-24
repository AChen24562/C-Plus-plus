#include <iostream>
using namespace std;

int main(){
// Number 1
const int dim = 9;
  for(int row = 0; row <dim; row++){
    for(int col = 0; col < dim; col++){
      if((row==col || row==dim -col -1) && (col <= dim/2))
          cout << "X ";
      else
          cout << "- ";
    }
    cout << endl;
  }
cout << endl << endl;

// Number 2
for(int i=15; i<= 51; i+=6){
  cout << i << " ";
}
cout << endl << endl;

// Number 3
/*int n;
do{
  cout << "Enter an odd integer: ";
  cin >> n;
    if(n % 2==0){
      cout << n << " is not an odd integer."
           << endl << endl;
    }
    else
      break;
}while(true);
  cout << n << " is an odd integer"; */

int n;
  cout << "Enter an integer: ";
  cin >> n;
    if(n%5 != 0 && n%12 == 0){
      cout << "Is " << n << " not a mutltiple of 5, but a multiple of 12?"
           << endl <<"True(1)";
    }
    else
    cout << "Is " << n << " not a mutltiple of 5, but a multiple of 12?"
         << endl <<"False(0)";

  return 0;
  }
