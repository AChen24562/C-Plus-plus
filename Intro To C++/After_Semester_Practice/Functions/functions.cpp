#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;
int print_sum(int x, int y);
int print_sum(int x);
void extract_digits(int a);
void iterative_digits(int a);

int main(){

  cout << print_sum(2, 3) << endl;
  cout << print_sum(6) << endl;

  cout <<endl << "Recursion" << endl;
  int a = 123;
  extract_digits(a);

  cout << endl << "Iteraton" << endl;
  iterative_digits(a);

  return 0;

}

void iterative_digits(int a){
  while(a > 0){
    cout << a % 10;
    a = a /10;
  }
}

void extract_digits(int a){
  if(a < 10){
    cout << a << endl;
  }
  else{
    extract_digits(a /10);
    cout << a % 10<< endl;
  }
}


int print_sum(int x, int y){
  return x + y;
}

int print_sum(int x){

  return x + 5;

}
