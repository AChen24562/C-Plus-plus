#ifndef COURSE_H
#define COURSE_H

#include <iostream>
using namespace std;

class Course{
private:
  int number;

public:
  Course();
  Course(int n);
  int getNum()const;
  void setNum(int m);

  friend ostream& operator<<(ostream &out, const Course &c);  

};

#endif
