//Alex Chen
//Prof. Sun
//Week 11 Recursion & Array Homework Part 1


#include <iostream>
using namespace std;

// Input function
 int inputN(){
   double num;
   do{
     cout << "Enter an integer number from 1 to 32,767: ";
     cin >> num;
     cout << endl;

  if(num == (int)num){
     if(num>0){
       if(num < 32767){
         break;
       }
       else
        cout << "Invalid input. Please re-enter."
             << endl;
     }
     else
      cout << "Invalid input. Please re-enter."
           << endl;
  }
    else
      cout << "Invalid input. Please re-enter."
           << endl;

   }while(true);
   return num;
 }

// Iterative Method
 /*void outputStars(int n) {
   int digit;

   while(n > 0){
     digit = n % 10;
     n /= 10;
     for(int i =0; i <digit; i ++){
       cout << "* " ;
     }
   cout << endl;
   }
 }*/




 //Recursive Method
 /*void outputStars(int n) {
   int digit;
     if(n<10) {
       for(int i =0; i <n; i ++){
         cout << "* " ;
       }
       cout << endl;
     }
     else {
         digit = n%10;

         for(int i =0; i <digit; i ++){
           cout << "* " ;
         }
         cout << endl;
         outputStars(n/10);
     }
 }*/

int main(){

  int n = inputN();
  outputStars(n);




  return 0;
}
