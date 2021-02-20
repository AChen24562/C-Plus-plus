#include <iostream>

using namespace std;

class Person{
private:
  string name;
  int age;

public:
  Person();
  Person(string n, int a);

  // Accessors
  string getName();
  int getAge();
  // Mutators
  void setName(string n);
  void setAge(int a);

};
// External, out of line
Person::Person(): Person("Noname",0){}
Person::Person(string n, int a):name(n), age(a){}

// Accessors
string Person::getName(){return name;}
int Person::getAge(){return age;}
// Mutators
void Person::setName(string n){name =n;}
void Person::setAge(int a){age = a;}


int main(){
  Person p1{};
  cout << p1.getName() <<" " << p1.getAge() << endl;




  return 0;
}
