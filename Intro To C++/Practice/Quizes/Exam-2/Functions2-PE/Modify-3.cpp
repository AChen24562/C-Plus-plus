#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

  void randNum(int n){

    cout <<  "Random number between 0 and " << n-1 << " is: " << rand() % n;
  }

  void randNum(int n, int s){
    srand(s);
    cout << endl << "Random number between 1 and " << n << " with seed of "<< s << " is: "
         << rand() % n +1;
  }



int main(){
    int n;
    int s;
    cout << "Enter a max number to be generated: ";
    cin >> n;
    cout << "Enter a seed: ";
    cin >> s;

cout << endl << endl;
    randNum(n);
    randNum(n, s);
cout << endl << endl;
    cout << "Enter a starting number of the range: ";
    cin >> n;
    cout << "Enter a seed: ";
    cin >> s;
    randNum(n, s);
  return 0;
}
