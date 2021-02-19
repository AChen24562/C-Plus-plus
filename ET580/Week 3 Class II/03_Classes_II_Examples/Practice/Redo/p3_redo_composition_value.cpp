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
  Address home;

public:
  // Default Constructor
  Person():Person("noname", 0){} // Uses Constructor delagation
  // 2 Param Constructor
  Person(string n, int a): name(n), age(a), home(){}

  // 3 Param Constructor
  Person(string n, int a, string loc): name(n), age(a), home(loc){}
  // 3 Param Constructor accepts object
  Person(string n, int a, Address &loc): name(n), age(a), home(loc){}


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
  Person p1{"Minnie Mouse" , 75};
  display(p1);

  Person p2{"Donald Dick", 75, "5150 Beech Street NoTown USA"};
  display(p2);

  Address a1{"222-05 56th Ave. Bayside NY"};
  Person p3{"Donald Dick", 75, a1};
  display(p3);


  return 0;


}
