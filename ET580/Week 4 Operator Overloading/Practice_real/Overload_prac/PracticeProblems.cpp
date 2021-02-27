#include <iostream>
#include <cmath>
#include <cassert>

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

int& operator[](int index){
  assert(index >= 0 && index <= 1);
  if(index == 0){
    return dollars;
  }
  else{
    return cents;
  }
}
// friends
friend Money operator+(const Money& lhs, const Money& rhs);
friend ostream& operator<<(ostream &out, const Money& m);
friend istream& operator>>(istream &in,  Money& m);

};
// end of class

// external friends
Money operator+(const Money& lhs, const Money& rhs){
  return Money((lhs.dollars + rhs.dollars), (lhs.cents + rhs.cents));
}
ostream& operator<<(ostream &out, const Money& m){
  if(m.dollars < 0 || m.cents < 0){
    if(abs(m.cents) < 10){
      out << "-$" << -m.dollars << ".0" << -m.cents;
      return out;
    }
    else{
      out << "-$" << -m.dollars << "." << -m.cents;
      return out;
    }
  }
  else if(m.cents < 10){
    out << "$" << m.dollars << ".0" << m.cents;
    return out;
  }
  out << "$" << m.dollars << "." << m.cents;
  return out;
}
istream& operator>>(istream &in,  Money& m){
  int d;
  int c;

  in >> d;
  in >> c;

  if (c >= 100){
    m.dollars = d + (c /100);
    m.cents = c % 100;
  }
  else{
    m.dollars = d;
    m.cents = c;
  }
  return in;
}

int main(){
  Money m1{5, 201};
  m1.display();

  Money m2{2, 50};
  m2.display();

  cout << m2[0] << "   " << m2[1] << endl << endl;
  cout << -m2 << endl << endl;

  Money m3{2, 25};
  m3.display();

  // 7.01 + 2.50 + 2.25 + 10
  (m1 + m2+ m3 + 10).display();
  cout << (m1 + m2+ m3 + 10) << endl << endl;

  Money m4{}, m5{};
  cout << "Enter Dollars and Cents: ";
  cin >> m4;
  cout << m4;




  return 0;


}
