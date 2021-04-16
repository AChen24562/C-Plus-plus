#include <iostream>
using namespace std;

class Animal{
protected:
  string type;

public:
  Animal(): Animal("No Type"){}
  Animal(string t): type(t){}

  string getType()const{return type;}
  void setType(string t){type = t;}

};

class Dog: public Animal{
private:
  string name;

public:
  Dog(): Dog("NoName", "NoType"){}
  Dog(string n, string t): name(n), Animal(t){}

  void display(){
    cout << "Name of dog: " << name << endl
        << "Type of Animal: " << type << endl << endl;
  }

};
int main(){
  Dog d1{"Buddy", "Mammal"};
  d1.display();


  return 0;
}
