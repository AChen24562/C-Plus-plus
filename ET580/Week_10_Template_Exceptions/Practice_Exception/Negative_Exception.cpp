#include <iostream>
using namespace std;

int main(){
  cout << "Enter a positive number, between 1-10: " ;
  int num;
  cin >> num ;

  try{
    if(num <0 ){throw "Number is negative";}
    if(num <1 || num >10){throw "Number is not between 1 -10";}
    cout << num << " + 2 = " << num +2;
  }
  catch(const char *e){
    cerr << "Error: " << e <<endl;
  }



  return 0;
}
