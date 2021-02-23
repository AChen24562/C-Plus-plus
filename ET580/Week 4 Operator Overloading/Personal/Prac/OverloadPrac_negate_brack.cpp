#include <iostream>
#include <cmath>
#include <cassert>

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
  if(dollar < 0|| cent <0){
    if(abs(cent) < 10){
      cout << "-$" << -dollar <<".0" << -cent << endl;
    }
    else{
      cout << "-$" << -dollar <<"." << -cent << endl;
    }
  }
  else if(cent < 10){
    cout << "$" << dollar <<".0" << cent << endl;
  }
  else{
    cout << "$" << dollar <<"." << cent << endl;
  }
}

// Overload
Money operator-()const{
  return Money(-dollar, -cent);
}
int& operator[](int index){
  assert(index >= 0 && index <= 1);
  if(index == 0){
    return dollar;
  }
  else{
    return cent;
  }
}
const int& operator[](int index)const{
  assert(index >= 0 && index <= 1);
  if(index == 0){
    return dollar;
  }
  else{
    return cent;
  }
}

friend bool operator==(const Money lhs, const Money rhs);
friend Money operator+(const Money lhs, const Money rhs);

friend ostream& operator<<(ostream & out, const Money &m);
friend istream& operator>>(istream & in,  Money &m);
// End of overload
};
// End of Class
bool operator==(const Money lhs, const Money rhs){
  return ((lhs.dollar == rhs.dollar) && (lhs.cent == rhs.cent));
}
Money operator+(const Money lhs, const Money rhs){
  return Money((lhs.dollar+ rhs.dollar), (lhs.cent + rhs.cent));
}
ostream& operator<<(ostream & out, const Money& m){
  if(m.dollar <0||m.cent <0){
    if(abs(m.cent) < 10){
      out << "-$" << -m.dollar<< ".0" <<-m.cent;
      return out;
    }
    else{
      out <<"-$" << -m.dollar << "." << -m.cent;
      return out;
    }
  }
  else if(m.cent < 10){
    out << "$" << m.dollar<< ".0" <<m.cent;
    return out;
  }
  else{
    out << "$" << m.dollar<< "." <<m.cent;
    return out;
  }
}
istream& operator>>(istream & in,  Money &m){
  int dollar;
  int cent;
  in >> dollar;
  in >>cent;
  if(cent >= 100){
    m.dollar = dollar +(cent /100);
    m.cent = cent %100;
  }
  else{
    m.dollar = dollar;
    m.cent = cent;
  }
  return in;
}

int main(){
  Money m1{5,0};
  m1.display();

  Money m2{2, 30};
  m2.display();

  (-m2).display();
  cout << m2[0] << endl <<endl;

  Money m3{2, 30};
  cout <<"Relation"<<endl<< (m2 == m3) << endl << endl;

  cout << "Arithmetic"<< endl;
  cout << m1 + m2 << endl;
  cout <<(m1 + m2+10) << endl;
  cout << -m1 << endl;

  cout << endl <<"cin test" << endl;
  Money test1{};
  Money test2{};

  cout << "Enter dollar and cent for test1: ";
  cin >> test1;
  cout << "Enter dollar and cent for test2: ";
  cin >> test2;

  cout << test1 + test2 << endl;
  cout << (test1 == test2)<< endl;



  return 0;
}
