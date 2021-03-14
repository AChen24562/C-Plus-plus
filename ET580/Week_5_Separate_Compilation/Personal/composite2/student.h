#ifndef STUDENT_H
#define STUDENT_H

#include "grade.h"
class Student{
private:
  string name;
  int age;
  Grade stats{};

public:
  Student();
  Student(string n, int a);
  Student(string n, int a, int s);

  // Accessors Mutators
  string getName()const;
  int getAge()const;

  void setName(string n);
  void setAge(int a);

  void output()const;

};


#endif
