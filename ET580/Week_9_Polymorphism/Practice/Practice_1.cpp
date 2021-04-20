#include <iostream>
using namespace std;

class Person{
protected:
  string name;
public:
  Person():Person("NoName"){}
  Person(string n):name(n){}

  void output()const{
    cout << name << endl;
  }
};

class Student: public Person{
private:
  int id;
public:
  Student():Student("NoName",0){}
  Student(string n, int i): Person(n), id(i){}

  void output()const{
    cout << name << " " << id << endl;
  }
};

class Instructor: public Person{
private:
  string department;
public:
  Instructor(): Instructor("NoName","NoDepartment"){}
  Instructor(string n, string d): Person(n),department(d){}

  void output()const{
    cout << name << " " << department << endl;
  }
};

int main(){
  Person *p = new Person{"Joseph"};
  p->output();
  delete p;

  p = new Student{"Dion" ,123};
  p->output();
  delete p;

  p = new Instructor{"Jerry", "Math"};
  p->output();


  return 0;
}
