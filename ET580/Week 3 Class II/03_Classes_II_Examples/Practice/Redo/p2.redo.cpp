#include <iostream>

using namespace std;

class Person{
private:
  string name;
  int age;

public:
  // Default Constructor
  Person():Person("noname", 0){} // Uses Constructor delagation
  // 2 Param Constructo
  Person(string n, int a): name(n), age(a){}

  // Accessors
  string getName() const{return name;}
  int getAge() const{return age;}

  // Mutators
  void setName(string n){name = n;}
  void setAge(int a){age = a;}
};
// Defined Externally 'out of line'


// End of External
int main(){
  Person p1{};
  cout << p1.getName() << " " << p1.getAge() << endl;

  Person p2{"Donald Duck", 100};
  cout << p2.getName() << " " << p2.getAge() << endl;


  return 0;


}
