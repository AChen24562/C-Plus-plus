#include <iostream>
using namespace std;

// A Person has-a Address
class Address{
private:
  string location;

public:
  Address():Address("location"){}
  Address(string l): location(l){}

  string getLoc() const {return location;}
  void setLoc(string l) {location = l;}
};
// end of Address class

class Person{
private:
  string name;
  int age;
  Address home; // home data memeber of type class Address

public:
  Person():Person("noName", 0){}
  Person(string n, int a): name(n), age(a), home(){}
  Person(string n, int a, string add):name(n), age(a), home(add){}
  // Accept Address obj
  Person(string n, int a, Address &add):name(n), age(a), home(add){}

// Accessors
  string getName()const{return name;}
  int getAge() const{return age;}

  string getHome() const{return home.getLoc();}
// Mutators
  void setName(string n) {name = n;}
  void setAge(int a){age = a;}
  void setHome(string h){home.setLoc(h);}

};

void display(Person &p){
  cout << "Name: " << p.getName()<<endl
      << "Age: " << p.getAge() << endl
      << "Location: " << p.getHome() << endl << endl;
}




int main(){
  Person p1{"Minnie Mouse", 75, "none"};
  display(p1);

  Person p2{"Minnie Mouse", 75};
  display(p2);

  Person p3{"Donald Duck", 75, "5150 Beech Street NoTown USA"};
  display(p3);

  Address a1{"222-05 56th Ave. Bayside NY"};
  Person p4{"Mickey Mouse", 100, a1};
  display(p4);


  Person p5{};
  p5.setHome("test");
  cout <<p5.getHome() << endl << endl;


  return 0;
}
