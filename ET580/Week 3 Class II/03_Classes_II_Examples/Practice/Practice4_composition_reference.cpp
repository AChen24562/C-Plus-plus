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
  Address &home;
public:
  Person(string n, int a, Address &h): name(n), age(a), home(h){}

  // Accessors
  string getName()const {return name;}
  int getAge()const {return age;}

  // Calls the composite function
  string getAddress() const {return home.getAddr();}
  // returns home object by referece
  Address &getAddObj()const{return home;}
};

void display(Person &p){
  cout << "Name: " << p.getName()
  << " Age: " << p.getAge()<< endl
  << "Address: " << p.getAddress() << endl << endl;
}

int main(){
  Address a1{"222-05 56th Ave. Bayside NY"};
  cout << & a1 << endl << endl;

  Person p1{"Mickey Mouse", 100, a1};
  display(p1);
  cout  << endl << &(p1.getAddObj());


  return 0;


}
