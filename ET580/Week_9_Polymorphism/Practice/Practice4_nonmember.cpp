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
    cout << name << " " << id << endl << endl;
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
    cout << name << " " << department << endl <<endl;
  }
};

// Non member print that prints according to its object type
void print(const Person &p){
  p.output();
}

int main(){
  Person *p; // Only pointers can be created with abstract

  p = new Student{"Dion" ,123};
  cout << p << endl;
  print(*p);
  delete p;

  p = new Instructor{"Jerry", "Math"};
  cout << p << endl;
  print(*p);


  return 0;
}
