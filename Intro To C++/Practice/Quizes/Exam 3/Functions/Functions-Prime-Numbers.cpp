#include <iostream>
using namespace std;

int primeNumber(int);

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

   bool isPrime;
   for(int i = 1; i < n; i++) {
      // isPrime will be true for prime numbers
      isPrime = primeNumber(i);

      if(isPrime == true)
         cout<< i <<" ";
   }
   return 0;
}

// Function that checks whether n is prime or not
int primeNumber(int n) {
   bool isPrime = true;

   for(int i = 2; i <= n/2; i++) {
      if (n%i == 0) {
         isPrime = false;
         break;
      }
   }
   return isPrime;
}
