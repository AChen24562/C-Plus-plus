#ifndef JOB_H
#define JOB_H

#include <iostream>
using namespace std;

class Job{
private:
  int pay;
  string title;

public:
  Job();
  Job(int p);
  Job(int p, string t);

  // Accesors and Mutators
  int getPay()const;
  string getTitle()const;

  void setPay(int p);
  void setTitle(string t);

  void output()const;

};




#endif
