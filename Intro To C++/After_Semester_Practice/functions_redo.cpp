#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;
int print_sum(int x, int y);
int print_sum(int x);


int main(){

  cout << print_sum(2, 3) << endl;
  cout << print_sum(6) << endl;

  int a = 123;
  extract_digits(a);

  return 0;

}



int print_sum(int x, int y){
  return x + y;
}

int print_sum(int x){

  return x + 5;

}
