#include <iostream>
using namespace std;

class Student{
private:
  int *studentID;

public:
  Student(): Student(0){}
  Student(int id): studentID( new int(id) ){}

  void display(){
    cout <<"With this->" <<(this->studentID) << endl
        << "With this " << this << endl << // *this reqires << overload
        "With: *(this->studentID)  "<<*(this->studentID) << endl;
  }
  void display2(){
    cout << endl << endl << studentID <<endl << *(studentID);
  }

};

int main(){

  Student s1{123};
  s1.display();
  s1.display2();





  return 0;
}
