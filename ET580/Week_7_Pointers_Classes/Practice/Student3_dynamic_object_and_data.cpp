#include <iostream>
using namespace std;

class Student{
private:
  int *stuId;

public:
  Student(): Student(0){}
  Student(int id): stuId( new int(id) ){}

  void display(){
    cout << stuId << endl << *(stuId);
  }
};

int main(){
  Student *s1 = new Student{123};
  s1->display();

  return 0;
}
