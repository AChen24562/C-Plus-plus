#ifndef GRADE_H
#define GRADE_H

#include <iostream>
using namespace std;

class Grade{
private:
  int score;

public:
  Grade();
  Grade(int s);

  int getScore()const;
  void setScore(int s);

  void output() const;

};


#endif
