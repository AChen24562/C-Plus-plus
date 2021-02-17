#include <iostream>

using namespace std;
// A Person has an address
class Address{
private:
  string address;

public:
  Address(): Address("location"){}
  Address(string loc): address(loc){}

  string getAddr() const{return address;}
  void setAddr(string loc) {address = loc;}

};


class Person{
private:
  string name;
  int age;
  Address home;
public:
  Person(): Person("noName", 0){}
  Person(string n, int a): name(n), age(a), home(){}
  Person(string n, int a, string addr):name(n), age(a), home(addr){}
  Person(string n, int a, Address &h):name(n), age(a), home(h){}

  string getName()const {return name;}
  int getAge()const {return age;}

  // Calls the composite function
  string getAddress() const {return home.getAddr();}
};

void display(Person &p){
  cout << "Name: " << p.getName()
  << " Age: " << p.getAge()<< endl
  << "Address: " << p.getAddress() << endl << endl;
}

int main(){
  Person p1{};
  cout << p1.getName() << " " << p1.getAge()<<" "
  <<  p1.getAddress()<< endl << endl;
  Person p2{"Minnie Mouse", 75};
  display(p2);

  Person p3{"Donald Duck", 75, "5150 Beech Street NoTown USA"};
  display(p3);

  // Create an Address object in main with the string
  Address a1{"222-05 56th Ave. Bayside NY"};
  Person p4{"Mickey Mouse", 100 , a1}; // Calls line 28
  display(p4);


  return 0;


}
