#include <iostream>
#include <cmath>

using namespace std;

class Money{
private:
  int dollar;
  int cent;

public:
  Money(): Money(0, 0){}
  Money(int d): Money(d, 0){}
  Money(int d,  int c): dollar(d), cent(c){
    if(cent >= 100){
      dollar = dollar +  (cent /100);
      cent = cent %100;
    }
  }
// Accessors
int getDol()const{return dollar;}
int getCent()const { return cent;}
// Mutator
void setDol(int d){dollar = d;}
void setCent(int c){
  if(cent >= 100){
    dollar = dollar + (c /100);
    cent = c % 100;
  }
  else{cent = c;}
}

void display(){
  if(cent < 10){
    cout << "$" << dollar <<".0" << cent << endl;
  }
  else{
    cout << "$" << dollar <<"." << cent << endl;
  }
}

};

int main(){
  Money m1{5,0};
  m1.display();

  Money m2{2, 30};
  m2.display();


  return 0;
}
