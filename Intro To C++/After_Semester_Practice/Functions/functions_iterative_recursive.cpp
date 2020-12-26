#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;

void iterative(int n) {
  while(n >0){
    cout << n % 10;
    n = n /10;

  }

}


void recursive(int a){
  if(a < 10){
    cout << a << endl;
  }
  else{
    recursive(a/10);
    cout << a %10 <<endl;
  }
}


int main(){
  int a = 44521;
  cout << endl <<"Original: " << a <<endl;
  recursive(a);

  a = 44521;
  cout << endl << "Iterative: ";
  iterative(a);
  cout << endl;
  // Iterative statement returns the number backwards

  string ofa = to_string(a); // Turns 'a' into a string
  cout << typeid(ofa).name();
  cout <<endl << ofa[0] << ofa[2];  // Using string manipulation
  cout <<endl<< "Lenght of " << ofa << " is: " << ofa.length() << endl;

  for(int i =0; i<ofa.length(); i++){
    cout << ofa[i] << endl;
  }

  return 0;

}
