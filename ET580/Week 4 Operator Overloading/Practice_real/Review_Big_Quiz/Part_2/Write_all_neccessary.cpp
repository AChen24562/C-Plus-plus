#include <iostream>

using namespace std;
class Boy{
private:
  int age;

public:
  Boy();
  Boy(int a);

  friend ostream& operator<<(ostream &out, const Boy &b);
  bool operator==(Boy& rhs);
  Boy operator++(int);
};

// Constructors
Boy::Boy(): Boy(0){}
Boy::Boy(int a): age(a){}


// friend output function
ostream& operator<<(ostream &out, const Boy &b){
  out << b.age;
  return out;
}

// Member externally defined
bool Boy::operator==(Boy& rhs){
  return (age == rhs.age);
}

// Member postfix
Boy Boy::operator++(int){
  Boy temp{age};
  ++age;
  return temp;
}
int main(){
  Boy b1{5}, b2{};
  cout << b2 << "\n";
  if(b1 == b2){
    cout << (b1 == b2) << endl;
 }
 cout << (b1 == b2) << endl;
cout << b1++ << " " << b1;


  return 0;
}
