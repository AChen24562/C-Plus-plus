#include <iostream>

using namespace std;

class Money{
private:
  int dollars;
  int cents;

public:
  Money(): Money(0, 0){}
  Money(int d): Money(d, 0){}
  Money(int d, int c): dollars(d), cents(c){
    if(c >= 100){
      dollars = d + (c/100);
      cents = c%100;
    }
  }

// Accessors
int getDol()const{return dollars;}
int getCents() const {return cents;}
// Mutators
void setDol(int d){dollars = d;}
void setCents(int c){
  if(c >= 100){
      dollars = dollars + (c/100);
      cents = c%100;
    }
    else{cents = c;}
  }

// display
void display()const{
  cout <<"$" << getDol()<< ".";
  if(cents< 10){
    cout <<"0" << cents;
  }
  else{
    cout << cents;
  }
}

};
int main(){
  Money  m1{0, 0};
  cout << m1.getDol() << " " << m1.getCents() << endl;
  m1.setCents(201);
  cout << m1.getDol() << " " << m1.getCents() << endl;
  m1.display();
  return 0;


}
