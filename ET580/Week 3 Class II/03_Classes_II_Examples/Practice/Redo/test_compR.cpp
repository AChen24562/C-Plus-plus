#include <iostream>
using namespace std;

// A Person has-a Address
class Address{
private:
  string location;

public:
  Address(): Address("location"){}
  Address(string l): location(l){}

  // Accessor
  string getLoc()const{return location;}
  // Mutator
  void setLoc(string l){location = l;}
};
// End of address class

class Person{
private:
  string name;
  int age;
  Address &home;

public:
  // Constructor
Person(string n, int a, Address &h):name(n), age(a), home(h){}

Address &getAddObj(){return home;}

  // Accessors
  string getName()const{return name;}
  int getAge()const{return age;}
  string getHome()const {return home.getLoc();}
};

void display(Person &p){
  cout << "Name: " << p.getName() << endl
      << "Age: " << p.getAge() << endl
      << "Location: " << p.getHome() << endl << endl;
}



int main(){

  Address a1{"222-05 56th Ave. Bayside NY"};
  cout << &a1 << endl << endl;

  Person p1{"Mickey Mouse", 100, a1};
  display(p1);
  cout << &(p1.getAddObj());



  return 0;
}
