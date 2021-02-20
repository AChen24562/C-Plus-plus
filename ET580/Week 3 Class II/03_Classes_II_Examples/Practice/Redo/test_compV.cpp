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
  Address home;

public:
  // Constructor
  Person(): Person("noName", 0){}
  Person(string n, int a): name(n), age(a), home(){}
  Person(string n, int a, string h): name(n), age(a), home(h){}
  Person(string n, int a, Address& h): name(n), age(a), home(h){}

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
  Person p1{"jim", 1, "asd"};
  display(p1);

  Person p0{"Minne Mouse", 75};
  display(p0);

  Person p2{"Donald Duck", 75, "5150 Beech Street NoTown USA"};
  display(p2);

  Address a1{"222-05 56th Ave. Bayside NY"};
  Person p3{"Mickey Mouse", 100, a1};
  display(p3);



  return 0;
}
