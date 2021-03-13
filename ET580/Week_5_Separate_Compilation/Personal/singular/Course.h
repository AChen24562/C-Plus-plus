#ifndef COURSE_H
#define COURSE_H

#include <iostream>
using namespace std;

class Course{
private:
  string name;
  int grade;

public:
  Course();
  Course(string n, int g);

  // Accessors/Mutators
  string getName()const;
  int geetGrade()const;

  void setName(string n);
  void setGrade(int g);

  void display()const;
};


#endif
