#include <iostream>
#include <cassert> // for [] overload
#include <cmath>

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
      cout << "-$" << -dollars  <<"."<< -cents << endl << endl;
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
// input output overload
friend ostream& operator<<(ostream &out, const Money &m);
friend istream& operator>>(istream &in, Money &m);
friend bool operator==(const Money &lhs, const Money &rhs);
friend Money operator+(const Money &lhs, const Money &rhs);


Money operator-()const{
  return Money(-dollars, -cents);
}
int& operator[](int index){
  assert(index >= 0 && index <=1);
  if(index == 0){
    return dollars;
  }
  else{
    return cents;
  }
}
const int& operator[](int index)const{
  assert(index >= 0 && index <=1);
  if(index == 0){
    return dollars;
  }
  else{
    return cents;
  }
}
//End of overload

};
// friend member
bool operator==(const Money &lhs, const Money &rhs){
  return (lhs.dollars == rhs.dollars && lhs.cents == rhs.cents);
}
Money operator+(const Money &lhs, const Money &rhs){
  return Money((lhs.dollars + rhs.dollars), (lhs.cents+ rhs.cents));
}

ostream& operator<<(ostream &out, const Money &m){
  if(m.dollars < 0 || m.cents<0 ){
    if(abs(m.cents)< 10){
      out <<"-$" << -m.dollars<< ".0" << -m.cents ;
      return out;
    }
    else{
      out <<"-$" << -m.dollars<< "." <<-m.cents ;
      return out;
    }

  }
  if(m.cents< 10){
    out <<"$" << m.dollars<< ".0" << m.cents;
    return out;
  }
  else{
    out <<"$" << m.dollars<< "." <<m.cents ;
    return out;
  }
}

istream& operator>>(istream &in, Money &m){
  int dollars;
  int cents;

  in >> dollars;
  in >> cents;
  if(cents >= 100){
    m.dollars = dollars + (cents /100);
    m.cents = cents %100;
  }
  else{
    m.dollars = dollars;
    m.cents = cents;
  }

  return in;
}


int main(){
  Money m1{2, 150}, m2{};
  cout << m1 << endl;
  cout << "Enter Dollars & cents: ";
  cin >> m2;
  cout <<endl << m1 << endl << m2;
  return 0;


}
