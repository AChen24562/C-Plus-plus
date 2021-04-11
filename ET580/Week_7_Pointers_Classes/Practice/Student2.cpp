#include <iostream>
using namespace std;

class Student{
private:


public:
  int *studentID;
  Student(): Student(0){}
  Student(int id): studentID( new int(id) ){}

  void display(){
    cout <<"With this->" <<*(this->studentID) << endl;
  }

};
int main(){
  Student s1{123};
  s1.display();


  return 0;
}
