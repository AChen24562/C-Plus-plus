#ifndef PERSON_H
#define PERSON_H

#include "Job.h"

class Person{
private:
  int age;
  string name;
  Job info{};

public:
  Person();
  Person(int a, string n);
  Person(int a, string n, int p, string t);

  // Accesors and Mutators
  int getAge()const;
  string getName()const;
  //int getPay()const;
  //string getTitle()const;

  void setAge(int a);
  void setName(string n);
  //void setPay(int p);
  //void setTitle(string t);




  void output()const;
};

#endif
