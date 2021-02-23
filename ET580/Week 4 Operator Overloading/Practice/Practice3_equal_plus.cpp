#include <iostream>
#include <cassert> // for [] overload

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
// == Overload
friend bool operator==(const Money &lhs, const Money &rhs);
friend Money operator+(const Money &lhs, const Money &rhs);


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
    if(abs(cents) <10){
      cout << "-$" << -dollars << ".0" << -cents << endl << endl;
      return;
    }
    else{
      cout << "-$" << -dollars  << "."<<-cents << endl << endl;
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
// friend member
bool operator==(const Money &lhs, const Money &rhs){
  return (lhs.dollars == rhs.dollars && lhs.cents == rhs.cents);
}

Money operator+(const Money &lhs, const Money &rhs){
  return Money((lhs.dollars + rhs.dollars), (lhs.cents+ rhs.cents));
}
int main(){
  Money m1{2, 50};
  m1.display();

  Money m2{2, 50};
  m2.display();

  cout << (m1 == m2) << endl << endl;


  (m1+m2).display();

  (10 + m1 + m2).display();
  return 0;


}
