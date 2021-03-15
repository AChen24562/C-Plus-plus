#include "Student.h"


Student::Student():Student("noName", 0, 0){}
Student::Student(string n, int a, int s):name(n), age(a), info(s){}

string Student::getName()const{return name;}
int Student::getAge()const{return age;}

void Student::setName(string n){name = n;}
void Student::setAge(int a){age = a;}

void Student::output()const{
  cout << "Name: " << name << endl
      << "Age: " << age << endl;
  info.output();
}
