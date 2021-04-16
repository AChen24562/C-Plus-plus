#include <iostream>
using namespace std;

class Arm{
private:
  string side;
public:
  Arm(): Arm("NoSide"){}
  Arm(string s): side(s){}

  string getSide()const{return side;}
  void setSide(string s){side = s;}

};

class Person{
private:
  string name;
  Arm *side;

public:
  Person(): Person("NoName", "Noside"){}
  Person(string n, string s):name(n), side(new Arm(s)){}
  Person(string n, Arm &a):name(n), side(& a){}

  string getName()const{return name;}
  void setName(string n){name = n;}

  Arm *getSide()const {return side;}
  void setSide(Arm &a){side = &a;}

  void display(){
    cout << "Name: " << name << endl
        << "Arm side: " << side->getSide() << endl << endl;
  }
};

int main(){
  Person p1{"Alvin", "Left"};
  p1.display();


  return 0;
}
