#include <iostream>
using namespace std;

  void sums(int n){
    int final =0;

    for(int i =1; i <=n; i++){
      final += i;
      cout << final << " ";
    }
  }


int main(){
  int n;
  cout << "Enter a number: ";
  cin >> n;

  sums(n);

  return 0;
}
