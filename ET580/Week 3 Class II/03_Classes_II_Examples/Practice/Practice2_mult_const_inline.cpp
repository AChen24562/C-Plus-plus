#include <iostream>

using namespace std;

class Person{
private:
  string name;
  int age;
public:
  Person(): Person("noname", 0){}
  Person(string n, int a): name(n), age(a){}

  string getName()const {return name;}
  int getAge()const {return age;}
};



int main(){
  Person p1{};
  cout << p1.getName() << " " << p1.getAge() << endl;

  Person p2{"Donald Duck", 100};
  cout << p2.getName() << " " << p2.getAge() << endl;

  return 0;


}
