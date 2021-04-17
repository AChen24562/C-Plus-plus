#include <iostream>
using namespace std;

class Person{
protected:
  string name;

public:
  Person():Person("NoName"){}
  Person(string n): name(n){}

  void display(){
    cout << "Name: " << name << endl;
  }

};
// End of Person class
class Student : public Person{
private:
  int id;

public:
  Student(): Student("NoName", 0){}
  Student(string n, int i): Person(n), id(i){}

  void display(){
    cout << "Name: " << name << " " << "ID: " << id << endl;
  }
};

int main(){
  Person p1{"Daniel"};
  p1.display();

  Student s1{"Jeff", 123};
  s1.display();


  return 0;
}
