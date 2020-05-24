#include <iostream>
using namespace std;

  void factors(int n){
    for(int i=1; i <= n; i++){
      if(n % i == 0){
        cout << i << " ";
      }

    }
  }




int main(){
  int n;
  cout << "Enter a positive number: ";
  cin >> n;

    if(n == 0){
      cout <<"Exiting...";
      exit(0);
    }
    else
      factors(n);


  return 0;
}
