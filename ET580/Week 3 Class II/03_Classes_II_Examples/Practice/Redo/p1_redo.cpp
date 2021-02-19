#include <iostream>

using namespace std;

class Person{
private:
  string name;
  int age;

public:
  Person();

  // Accessors
  string getName() const;
  int getAge() const;

  // Mutators
  void setName(string n);
  void setAge(int a);
};
// Defined Externally 'out of line'
Person::Person():name("noname"), age(0){}

  // Accessors
string Person::getName()const{return name;}
int Person::getAge()const{return age;}

// Mutators
void Person::setName(string n){name = n;}
void Person::setAge(int a){age = a;}


// End of External
int main(){
  Person p1{};
  cout << p1.getName() << " " << p1.getAge();


  return 0;


}
