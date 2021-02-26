#include <iostream>
#include <cmath>

using namespace std;

class Money{
private:
  int dollars;
  int cents;
public:
  Money(): Money(0,0){}
  Money(int d):Money(d, 0){}
  Money(int d, int c): dollars(d), cents(c){
    if(c >= 100){
      dollars = d + (c / 100);
      cents = c %100;
    }
  }
  // Accessors
  int getDollars()const{return dollars;}
  int getCents()const{return cents;}
  // Mutators
  void setDollars(int d){dollars = d;}
  void setCents(int c){
    if(c >= 100){
      dollars = dollars + (c / 100);
      cents = c %100;
    }
    else{
      cents = c;
    }
  }

  void display()const{
    if(dollars < 0 || cents < 0){
      if(abs(cents) < 10){
        cout << "-$" << -dollars << ".0" << -cents << endl;
      }
      else{
        cout << "-$" << -dollars << "." << -cents << endl;
      }
    }
    else if(cents < 10){
      cout << "$"<<dollars <<".0" << cents << endl;
    }
    else{
      cout << "$"<<dollars <<"." << cents << endl;
    }
  }
// Operator overload
Money operator-()const{
  return Money(-dollars, - cents);
}

};
int main(){
  Money m1{5, 201};
  m1.display();

  Money m2{2, 50};
  m2.display();

  (-m2).display();


  return 0;


}
