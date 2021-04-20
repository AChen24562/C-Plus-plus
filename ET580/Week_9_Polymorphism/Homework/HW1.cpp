#include <iostream>
using namespace std;

class Person{
protected:
  string name;

public:
  Person(): Person("NoName"){} // Person constructor
  Person(string n ):name(n){}

  virtual void output()=0; // Sets Person to an abstract class
};

// Base of Person, Derived of Student
class Student: public Person{ // Student is-a Person
private:
  int id;

public:
  Student(): Student("noName",0){}
  Student(string n, int i): Person(n), id(i){}

  void output()const override{ // Overrides the pure virtual function
    cout << name << " " << id << endl;  // prints name and id  of Student
  }
};
// Base of Person, Derived of Employee
class Employee: public Person{// Employee is-a Person
private:
  string job;

public:
  Employee(): Employee("NoName", "NoJob"){}
  Employee(string n, string j): Person(n), job(j){}

  void output()const override{ // Overrides the pure virtual function
    cout << name <<" " << job << endl; // Prints name and job title of Employee
  }
};

int main(){
  cout << endl;

// Main driver function
  Person **p = new Person *[4]; // create array of pointers that point to Person objects
  p[0] = new Student{"Jake", 1010}; // store student object into first element of array of pointers
  p[1] = new Student{"Kim", 4364};// store student object into second element of array of pointers

  p[2] = new Employee("Charles", "Penn Tester"); // store Employee object into third element of array of pointers
  p[3] = new Employee("Sara", "Web Developer");// store Employee object into fourth element of array of pointers

  for(int i =0; i <4; i++){ // 0 - 4 use the output function that coincides with the object type within the index
    p[i]->output();
  }
  cout << endl;


  return 0;
}
