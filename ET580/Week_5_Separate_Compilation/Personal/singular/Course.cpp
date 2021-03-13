#include "Course.h"

Course::Course():Course("null", 0){}
Course::Course(string n, int g):name(n), grade(g){}

string Course::getName()const{return name;}
int Course::geetGrade()const{return grade;}

void Course::setName(string n){name = n;}
void Course::setGrade(int g){grade = g;}

void Course::display()const{
  cout <<"Name of Course: "<< name<<endl
      << "Grade: "<<grade << endl;
}
