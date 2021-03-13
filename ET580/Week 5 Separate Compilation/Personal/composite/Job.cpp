#include "Job.h"

Job::Job():Job(0){}
Job::Job(int p): Job(p, "NoTitle"){}
Job::Job(int p, string t): pay(p), title(t){}

int Job::getPay()const{return pay;}
string Job::getTitle()const{return title;}

void Job::setPay(int p){pay =p;}
void Job::setTitle(string t){title = t;}

void Job::output()const{
  cout <<"Pay: " << pay << endl
      <<"Title: " << title << endl;
}
