#include <iostream>
using namespace std;

class Person{
protected:
  string name;
public:
  Person(): Person("NoName"){}
  Person(string n ): name(n){}

  void display()const{
    cout << "Name: " << name << endl << endl;
  }
};

class Student: public Person{ // A Student is-a Person
private:
  int id;
public:
  Student(): Student("NoName",0){}
  Student(string n,int i): Person(n), id(i){}

  void display()const{ // Reassign
    cout << "Name: " << name << endl
        << "ID: " << id;
  }

};

int main(){
  Person p1{"Aragorn"};
  p1.display();

  Student s1{"Alvin", 123};
  s1.display();


  return 0;
}
