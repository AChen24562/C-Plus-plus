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
// end of constructor

// Overload
Money operator-()const{
  return Money(-dollars, -cents);
}


//End of overload

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
  if(dollars < 0|| cents <0){
    if(cents <10){
      cout << "-$" << -dollars << ".0" << -cents << endl;
      return;
    }
    else{
      cout << "-$" << -dollars  << -cents << endl;
      return;
    }
  }

    if(cents< 10){
      cout <<"$" << dollars<< ".0" << cents << endl << endl;
    }
    else{
      cout <<"$" << dollars<< "." <<cents << endl << endl;
    }

}

};
int main(){
  Money  m1{-5, -5};
  m1.display();

  (-m1).display();

  Money  m2{0, -5};
  m2.display();
  (-m2).display();
  return 0;


}
