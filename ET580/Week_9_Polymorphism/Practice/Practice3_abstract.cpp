#include <iostream>
using namespace std;

class Person{
protected:
  string name;
public:
  Person():Person("NoName"){}
  Person(string n):name(n){}

  virtual void output()const = 0;  // Becomes an abstract class
};

class Student: public Person{
private:
  int id;
public:
  Student():Student("NoName",0){}
  Student(string n, int i): Person(n), id(i){}

// redefine an overide of the pure virtual function in parent/base
  void output() const override{
    cout << name << " " << id << endl;
  }
};

class Instructor: public Person{
private:
  string department;
public:
  Instructor(): Instructor("NoName","NoDepartment"){}
  Instructor(string n, string d): Person(n),department(d){}

// redefine an overide of the pure virtual function in parent/base
  void output() const override{
    cout << name << " " << department << endl;
  }
};

int main(){
  Person *p; // Only pointers can be created with abstract

  p = new Student{"Dion" ,123};
  p->output();
  delete p;

  p = new Instructor{"Jerry", "Math"};
  p->output();
  delete p;


  return 0;
}
