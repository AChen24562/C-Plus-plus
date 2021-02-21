#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;

class Money{
private:
  int dollars;
  int cents;

public:
  Money(): Money(0, 0){}
  Money(int d, int c): dollars(d), cents(c){
    if(c >= 100){
      dollars = d + (c/100);
      cents = c%100;
    }
  }
// Accessor
int getDollars()const{return dollars;}
int getCents()const{return cents;}
// Mutators
void setDollars(int d){dollars = d;}
void setCents(int c){
  if(c >= 100){
    dollars = dollars+ (c/100);
    cents = c %100;
  }
  else{
    cents = c;
  }
}
// Display
void display()const{
  if(dollars <0 || cents <0){
    if(abs(cents) < 10){
      cout << "-$" << -dollars << ".0"<<-cents <<endl;
      return;
    }
    else{
      cout << "-$" << -dollars << "."<<-cents <<endl;
      return;
    }
  }
  if(cents < 10){
    cout << "$" << dollars << ".0"<<cents <<endl;
  }
  else{
    cout << "$" << dollars << "."<<cents <<endl;
  }
}

// Overload
Money operator-()const{
  return Money(-dollars, -cents);
}
int &operator[](int index){
  assert(index >= 0&& index <=1);
  if(index == 0){
    return dollars;
  }
  else{
    return cents;
  }
}

friend bool operator==(const Money &lhs, const Money& rhs);
friend Money operator+(const Money &lhs, const Money & rhs);
};
// End of class
bool operator==(const Money &lhs, const Money& rhs){
  return (lhs.dollars == rhs.dollars && lhs.cents == rhs.cents);
}
Money operator+(const Money &lhs, const Money & rhs){
  return Money((lhs.dollars + rhs.dollars), (lhs.cents + rhs.cents));
}
int main(){
    Money m1{1, 20};
    Money m2{1, 20};
    cout << (m1 == m2) << endl;
    (m1 + m2).display();


  return 0;
}
