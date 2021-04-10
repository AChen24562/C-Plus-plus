#include <iostream>
using namespace std;

class Course{
  int number;
  string name;
public:


  Course(): Course(0, "blank"){}
  Course(int n, string nme): number(n), name(nme){}

  void print() const{
    cout << this << endl;
    cout << *this << endl;
    cout << endl;
  }
  friend ostream &operator<<(ostream &out, const Course &c);
};
ostream &operator<<(ostream &out, const Course &c){
  out << c.number;
  return out;
}

int main(){
  Course *c1 = new Course{575, "Alvin"};
//  cout << c1->number << endl;
  c1->print();



  delete c1;

  return 0;
}
