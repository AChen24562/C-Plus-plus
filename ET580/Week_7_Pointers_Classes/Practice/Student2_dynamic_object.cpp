#include <iostream>
using namespace std;

class Student{
private:
  int stuId;
public:
  Student():Student(0){}
  Student(int id): stuId(id){}

  void display(){
    cout << "Id: " << stuId << endl;
  }
};

int main(){
  Student *s1 = new Student{123};
  s1->display();
  (*s1).display();



  return 0;
}
