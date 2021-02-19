#include <iostream>
using namespace std;

class Person{
private:
  string name;
  int age;

public:
  Person():Person("noName", 0){}
  Person(string n, int a): name(n), age(a){}

// Accessors
  string getName()const{return name;}
  int getAge() const{return age;}
// Mutators
  void setName(string n) {name = n;}
  void setAge(int a){age = a;}

};




int main(){
  Person p1{};
  cout << p1.getName() << " " << p1.getAge() << endl<<endl;
  Person p2{"Donald Duck", 100};
  cout << p2.getName() << " " << p2.getAge() << endl<<endl;

  return 0;
}
