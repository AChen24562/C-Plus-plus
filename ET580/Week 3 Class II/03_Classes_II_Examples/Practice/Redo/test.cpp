#include <iostream>

using namespace std;


class Address{
private:
  string location;
public:
  Address(): Address("Location"){}
  Address(string l): location(l){}

  string getLoc()const{return location;}
  void setLoc(string l){location =l;}
};
// end of address class
class Person{
private:
  string name;
  int age;
  Address home;

public:
  Person(): Person("NoName", 0){}
  Person(string n, int a): name(n), age(a){}
  Person(string n, int a, string l): name(n), age(a),home(l){}
  Person(string n, int a, Address &l): name(n), age(a),home(l){}

  // accessors
  string getName()const{return name;}
  int getAge()const{return age;}
  string getHome() const {return home.getLoc();}
  // Mutators
  void setName(string n){name = n;}
  void setAge(int a){age = a;}
  void setHome(string l) {home.setLoc(l);}

};
// Nonmember function
void display(Person &p){
  cout << "Name: " << p.getName() << endl
      << "Age: " << p.getAge() << endl
      << "Location: " << p.getHome() << endl << endl;

    }

int main(){
  Person p1{};
  cout << p1.getName() <<" " << p1.getAge() << endl << endl;

  Person p2{"Donald Duck", 100};
    cout << p2.getName() <<" " << p2.getAge();

  Person p3{"Minnie Mouse", 75};
  display(p3);

  Person p4{"Donald Duck", 75, " 5150 Beech Street NoTown USA"};
  display(p4);

  Address a1{"222-05 56th Ave. Bayside NY"};
  Person p5{"Mickey Mouse", 100, a1};
  display(p5);

  return 0;


}
