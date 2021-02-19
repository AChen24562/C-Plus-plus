#include <iostream>

using namespace std;

// A Person has-a Address
class Address{
private:
  string location;

public:
  Address():Address("location"){}
  Address(string loc): location(loc){}

  // Accessor and Mutator
  string getLoc()const{return location;}
  void setLoc(string loc){location = loc;}

};

class Person{
private:
  string name;
  int age;
  Address &home;

public:
  // Default Constructor
  Person(string n, int a, Address &loc):name(n), age(a), home(loc){}
  // Get obj
  Address & getAddObj(){return home;}


  // Accessors
  string getName() const{return name;}
  int getAge() const{return age;}
  string getHome() const {return home.getLoc();}

  // Mutators
  void setName(string n){name = n;}
  void setAge(int a){age = a;}
};
// Nonmember Display
void display(Person &p){
  cout << "Name: " << p.getName()<< endl
      << "Age: " << p.getAge() << endl
      << "Loc: " << p.getHome() << endl << endl;
}
int main(){

  Address a1{"222-05 56th Ave. Bayside NY"};
  cout << &a1 << endl << endl;
  Person p1{"Mickey Mouse", 100, a1};
  display(p1);
  cout << &(p1.getAddObj());
  /*
  Person refers to the a1 object
  Now, the two objects hace independent lifetimes
  Person or Address can get deleted and it will not affect the other

  No right or wrong answer depends on the memory model
  you want to use
  */



  return 0;


}
