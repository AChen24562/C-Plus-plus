#include <iostream>

using namespace std;

class Person{
private:
  string name;
  int age;
public:
  Person();
  string getName();
  int getAge();
};

Person::Person(): name("NoName"), age(0){}
string Person::getName(){return name;}
int Person::getAge(){return age;}

int main(){
  Person p1{};
  cout << p1.getName() << " " << p1.getAge();

  return 0;


}
