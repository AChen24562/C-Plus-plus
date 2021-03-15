#ifndef STUDENT_H
#define STUDENT_H

#include "Grade.h"

class Student{
private:
  string name;
  int age;
  Grade info{};

public:
  Student();
  Student(string n, int a, int s);

  string getName()const;
  int getAge()const;

  void setName(string n);
  void setAge(int a);

  void output()const;

};

#endif
