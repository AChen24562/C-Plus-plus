#include "Grade.h"

Grade::Grade(): Grade(0){}
Grade::Grade(int s):score(s){}

int Grade::getScore()const{return score;}
void Grade::setScore(int s){score = s;}

void Grade::output() const{
  cout << "Score: " << score;
}
