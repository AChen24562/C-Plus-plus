#include <iostream>
using namespace std;

bool checkPrime(int n);

int main(){
bool isPrime;
int num;

cout << "Enter a number: ";
cin >> num;


isPrime=checkPrime(num);
if(isPrime == true){
  cout << num << " IS a prime";
}
else{
  cout << num << " is NOT a prime";
}


  return 0;
}

bool checkPrime(int n){
    bool factor = true;
    for (int i = 2; i <= n; i++){
      if(n % i == 0){
        factor = false;
        break;
      }
    }
    return factor;
}
