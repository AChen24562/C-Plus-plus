#include <iostream>

using namespace std;

class Bank{
private:
  float balance;
  float debt;
public:
  Bank():Bank(0.0, 0.0){}
  Bank(float b): balance(b), debt(0.0){}
  Bank(float b, float d): balance(b), debt(d){}

// Accessors
float getBalance()const{return balance;}
float getDebt()const{return debt;}
// Mutators
void setBalance(float b){balance = b;}
void setDebt(float d){debt = d;}

// overload
friend ostream& operator<<(ostream &out, const Bank& b);
};
// friend overloads
ostream& operator<<(ostream &out, const Bank& b){
  out << "Your balance: " << b.balance << endl
      << "Your debt: " << b.debt;
  return out;
}

int main(){
  cout.setf(ios::fixed);
  cout.precision(2);

  Bank b1{};
  cout << b1;


  return 0;


}
