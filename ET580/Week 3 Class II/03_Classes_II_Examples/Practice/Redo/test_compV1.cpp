#include <iostream>

using namespace std;
// Address class Composition
class Address{
private:
  string location;

public:
  Address(): Address("location"){}
  Address(string l): location(l){}

  string getLoc()const{return location;}
  void setLoc(string l){location =l;}

};

// End of Address class


class Person{
private:
  string name;
  int age;
  Address home;

public:
  Person(): Person("Noname",0){}
  Person(string n, int a):name(n), age(a){}
  Person(string n, int a, string h): name(n), age(a), home(h){}
  Person(string n, int a, Address & h): name(n), age(a), home(h){}

  // Accessors
  string getName()const{return name;}
  int getAge()const{return age;}
  string getHome() const {return home.getLoc();}
  // Mutators
  void setName(string n){name =n;}
  void setAge(int a){age = a;}

};
void display(Person &p){
  cout << "Name: " << p.getName() << endl
      << "Age: " << p.getAge() << endl
      << "Location: " << p.getHome() << endl << endl;
}



int main(){
  Person p1{};
  cout << p1.getName() <<" " << p1.getAge() << endl;

  Person p2{"Minnie Mouse", 75};
  display(p2);

  Person p3{"Donald Duck", 75, "5150 Beech Street NoTown USA"};
  display(p3);

  Address a1{"222-05 56th Ave. Bayside NY"};
  Person p4{"Mickey Mouse", 100, a1};
  display(p4);



  return 0;
}
// 4219
