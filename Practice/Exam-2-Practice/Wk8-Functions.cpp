#include <iostream>
using namespace std;

// #PE2
char myletter(int x, int y){
  if (x > y){
    cout << "B";
  }
  if(x < y){
    cout << "S";
  }
  if(x==y){
    cout << "E";
  }
return x ,y;

}


int main(){
  int x, y;

  cout << "Enter two numbers: ";
  cin >> x >> y;

  myletter(x, y);



// #PE3
/*void square(int n){
  cout << n *n;
}

int main(){
int num;

cout << "Enter a number: ";
cin >> num;

square(num);*/

//#4
/*double cubed(int n){
  return n*n*n;
}

int main(){

  int num;
  cout << "Enter num: ";
  cin >> num;

  cout << cubed(num);*/

// 5
/*bool isValid(int n){
  bool valid;
  if(n >= 1 && n <= 575){
    valid =true;
  }
  else{
    valid = false;
  }
  return valid;
}

  int main(){

int num;
cout <<" Enter num: ";
cin >> num;

cout << isValid(num);*/






  return 0;
}
