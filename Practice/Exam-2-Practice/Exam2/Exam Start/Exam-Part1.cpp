// Prof. Sun
// Alex Chen
// Exam 2
#include <iostream>
#include <iomanip>
using namespace std;


int main(){
 // Number 1
/*int num;
 int counter =0;

do{
  cout << "Enter a postive number that is less than 7 or greater than 11: ";
  cin >> num;

  if((num > 0) && (num < 7 || num > 11)){
    break;
}
else
  counter ++;
  cout << "Invalid input. Loop Iteration(s) = " << counter << endl << endl;

} while(true);
counter ++;
cout << "Input is valid. Loop Iteration(s) = " << counter;*/


// Number 2
/*double numer;
double deno;


do{
  cout << "Enter an integer value for the numerator: ";
  cin >> numer;
  cout << "Enter an integer value for the denominator: ";
  cin >> deno;

  if(numer == (int)numer && deno == (int)deno){
    if(deno !=0)
      break;

    else
    cout << "Denominator cannot be 0. Please Re-enter" << endl << endl;
  }
else
  cout << "Decimal values are invlaid. Please Re-enter" << endl << endl;

}while(true);
double result = numer /deno;
// Changes double to int
int intnumer = static_cast<int>(numer);
int intdeno = static_cast<int>(deno);

int intResult = intnumer / intdeno;
int modResult = intnumer % intdeno;

cout << "Regular division: " << intnumer << " / " << intdeno << " = " << setprecision(5) << fixed << result << endl;
cout << "Integer division: " << intnumer << " / " << intdeno << " = "  << intResult << endl;
cout << "Integer division: " << intnumer << " % " << intdeno << " = " << fixed << modResult << endl << endl;
*/

// Number 3
/*int num;
  do{
    cout << "Enter a positive odd integer: ";
    cin >> num;


     if(num!=0){
       if(num%2 != 0){
         break;
       }
       else
          cout << endl << endl;
     }
     else
          cout << endl << endl;

  }while(true);

  for(int row =0; row < num; row++){
    for(int col =0; col < num; col++){
      if(row == col || row == num -col -1 || row == 0 || row == num -1)
          cout << "* ";
      else
          cout << "- ";
    }
    cout << endl;
  }*/


  // Number 4
int age;
do{
cout << "Enter your age: ";
cin >> age;
cout << endl << endl;

  if(age>=0 && age <=115){
      if(age<=3){
        cout << "You are a baby";
        break;
      }
      else if(age<=11){
        cout << "You are a child";
        break;
      }
      if(age <= 20){
        cout << "You are a teenager";
        break;
      }
      if(age <=64){
        cout << "You are an adult";
        break;
      }
      if(age <= 115){
        cout << "You are a senior citizen";
        break;
      }
  }
  else
    cout << "Invalid age. Please re-enter."<< endl << endl;

}while(true);


return 0;
}
