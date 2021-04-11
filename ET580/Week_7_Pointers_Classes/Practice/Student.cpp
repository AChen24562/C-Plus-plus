#include <iostream>
using namespace std;

class Student{
private:


public:
  int *studentID;
  Student(): Student(0){}
  Student(int id): studentID( new int(id) ){}

  void display(){
    cout <<"With this->" <<(this->studentID) << endl
        << "With this " << this << endl << *(this->studentID) << endl;
  }

};

int main(){
  
  Student *s1 = new Student{123};

  s1->display();
  (*s1).display();
  cout << endl << endl << "s1: " << s1 <<endl;
  cout <<"s1 ID mem: " << (s1->studentID) << endl;
  cout << *(s1->studentID); // Shows mem addr of studentID



  return 0;
}
