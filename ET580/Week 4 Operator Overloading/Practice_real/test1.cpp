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
  Money(int d): Money(d, 0){}
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

// Overload
Money operator-()const{
  return Money(-dollars, -cents);
}
int& operator[](int index){
  assert(index >=0 && index <= 1);
  if(index ==0){
    return dollars;
  }
  else{
    return cents;
  }
}
const int& operator[](int index)const{
  assert(index >=0 && index <= 1);
  if(index ==0){
    return dollars;
  }
  else{
    return cents;
  }
}

friend bool operator==(const Money &lhs, const Money &rhs);
friend Money operator+(const Money &lhs, const Money &rhs);
};
// End of class

bool operator==(const Money &lhs, const Money &rhs){
  return (lhs.dollars==rhs.dollars && lhs.cents ==rhs.cents);
}
Money operator+(const Money &lhs, const Money &rhs){
  return Money((lhs.dollars + rhs.dollars), (lhs.cents+ rhs.cents));
}

int main(){
    Money m1{2, 10};  // -
    (-m1).display();    // -
    cout << m1[0] << endl;  // []

    Money m2{2, 10};
    cout << (m1 == m2) << endl;// ==

    (m1+m2).display();
    (m1 + m2+10).display();  // +




  return 0;
}
