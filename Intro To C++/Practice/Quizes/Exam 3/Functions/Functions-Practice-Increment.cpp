#include <iostream>
using namespace std;

  void increment(int& input, int& sum){

    sum += input;
    cout << "New sum is: " << sum << endl << endl;
  }



int main(){
  int input;
  int sum = 0;

do{
  cout << "Enter a number: ";
  cin >> input;

if(input == 0){
  cout << "Ending Program... "<< endl;
  exit(0);
}
  increment(input, sum);

}while(true);

  return 0;
}
