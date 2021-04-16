#include <iostream>
using namespace std;

class Animal{
protected:
  string *type;

public:
  Animal(): Animal("No Type"){}
  Animal(string t): type(new string(t)){}

  string getType()const{return *type;}

  void setType(string t){
    delete type;
    type = new string(t);
  }

// Big Three
// Copy
  Animal(const Animal &a):
    type(new string(*a.type)){}
// Assignment(=)
  Animal &operator=(const Animal &a){
    if(this != &a){
      *(type) = *(a.type);
    }
    return *this;
  }
  ~Animal(){delete type;}
};

class Dog: public Animal{
private:
  string *name;

public:
  Dog(): Dog("NoName", "NoType"){}
  Dog(string n, string t): name(new string(n) ), Animal(t){}

  void display(){
    cout << "Name of dog: " << name << endl
        << "Type of Animal: " << type << endl << endl;
  }
  // Big Three
  //Copy
  Dog(const Dog &d):
    Animal(d),
    name( new string(*(d.name)) ){}
// Assignment (=)
  Dog &operator=(const Dog &d){
    if(this != &d){
      Animal::operator=(d);
      *(name) = *(d.name);
    }
    return *this;
  }
// Destructor
  ~Dog(){delete name;}

};
int main(){
  Dog d1{"Buddy", "Mammal"};
  d1.display();

  Dog d2{d1};
  d2.display();

  Dog d3{"Pepper", "Mammal"};
  d3 =  d2;
  d3.display();


  return 0;
}
