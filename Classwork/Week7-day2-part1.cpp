#include <iostream>
using namespace std;

int main(){
/*int row, col;*/ // #5



// 5 make continue as comment
/*
do{
cout << "Enter the number of rows (1-10): ";
cin >> row;
cout << "Enter the number of columns (1-10): ";
cin >> col;
cout << endl;

if(row > 0 && row < 11 && col > 0 && col < 11)
    break;
else{
  cout << "Invalid input. Please re-enter. \n\n";
  continue;
  }
    cout << "Today is the first online class. " <<endl;
}while(true);

  for(int r=0; r < row; r++ )
  {
    for(int c=0; c<col; c++)
        cout << "*" << "\t";
        cout <<endl;
  }

cout <<endl;
*/


// 6 Request integer value 'n' and use loop to print all factors of 'n'
/*int n;

cout << "Enter a value for 'n': ";
cin >> n;
cout << endl;

cout << "Factors: ";
for(int i = 1; i <= n; i++){
    if(n % i == 0)
      cout << i << " ";
}*/


// 7 Determin if a number is a prime or not
/*int n;
cout << "Enter a number: ";
cin >> n;
int numFactors =0;

cout << endl;
    for(int i =2; i <n; i++){
        if(n%i == 0 )
        numFactors++;
     }
if(numFactors > 0){
  cout << n << " is not a prime number." << endl;
}
else{
  cout << n << " is a prime number. "<< endl;
}*/

// bool method for 7
int number;
bool isPrime = true;

cout << "Enter a number: ";
cin >>number;

for(int i=2; i<number; i++){
  if(number %i ==0){
      isPrime =false;
      break;
  }
}
if(isPrime)
    cout << number << " is a prime number. " << endl;

else
    cout << number << " is not a prime number. " << endl;



  return 0;
}
