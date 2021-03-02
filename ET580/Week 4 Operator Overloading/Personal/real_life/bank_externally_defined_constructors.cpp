#include <iostream>

using namespace std;

class Person{
private:
string name;

public:


  // Accessors
  string getName() const;
  void setName(string n);

};
// test externally defined

string Person::getName()const{return name;}
void Person::setName(string n){name = n;}

int main(){
  Person p1{};
  p1.setName("Alvin");
  cout << p1.getName();



  return 0;
}
