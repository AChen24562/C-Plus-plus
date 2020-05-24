//Alex Chen
//Prof. Sun
// Week 8 part 2 Prime numbers

#include <iostream>
using namespace std;

bool hasFactor(int n);

int main(){
  double number;
  bool factor;
  cout  << "Enter a positive number"
       << endl << "<or enter Zero <0> to end the program>: ";
  cin >> number;

  do{
    // Checks for 0s in the beginning and after a negative number
    if(number == 0){
      cout << "Exiting Prgram....";
        return 0;
    }
    if(number < 0){
      cout << endl << number << " is an invalid input. Please re-enter."
           << endl << "Enter a positive number"
            << endl << "<or enter Zero <0> to end the program>: ";
            cin >> number;
            if(number == 0){
              cout << "Exiting Prgram....";
                return 0;
            }
          }

// checks for for factors and determines prime
factor = hasFactor(number);
  if(factor ==true){
    cout << endl << number << " is a prime number" << endl << endl;
    cout  << "Enter a positive number"
         << endl << "<or enter Zero <0> to end the program>: ";
    cin >> number;
  }
  else{
    cout <<endl << number << " is not a prime number" << endl << endl;
    cout  << "Enter a positive number"
         << endl << "<or enter Zero <0> to end the program>: ";
    cin >> number;
    }
// exits program
}while(number != 0);
cout << "Exiting Prgram....";
return 0;
}
// checks for factos
bool hasFactor(int num){
    bool factor=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          factor = false;
          break;
       }
    }
    return factor;
}
