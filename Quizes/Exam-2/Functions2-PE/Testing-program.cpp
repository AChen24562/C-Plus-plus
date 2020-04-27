#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

  void randNum(int n){

    cout <<  "Random number between 0 and " << n-1 << " is: " << rand() % n;
  }

  void randNum(int n, int s){
    srand(s);
    cout << endl << "Random number between 0 and " << n-1 << " with seed of "<< s << " is: "
         << rand() % n;
  }


int main(){
    int n;
    int s;
    cout << "Enter a max number to be generated: ";
    cin >> n;

    randNum(n);

    cout << endl << endl;
    cout << "Enter a max number to be generated: ";
    cin >> n;
    cout << "Enter a seed: ";
    cin >> s;

    randNum(n, s);

  return 0;
}
