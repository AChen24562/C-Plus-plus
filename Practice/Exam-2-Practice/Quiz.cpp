#include <iostream>
using namespace std;

  int inputNum(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    return n;
  }

  void sumOdd(int n){
    int counter = 0;
    for(int i = 1; i<n; i ++){
      if(i%2 != 0){
        counter += i;
        cout << "Add " << i;
        cout << endl;
      }
    }
    cout << "The sum of all odd integers between 1 and "
         << n << " is " << counter;
  }


int main(){

  int n = inputNum();

  sumOdd(n);

  return 0;
}
