#include <iostream>
using namespace std;

class Student{
private:
  int *id;
  string name;

public:
  Student(): Student("noName", 0){}
  Student(string n, int i): name(n), id(new int(i)){}

  void print(){
    cout << "Name: " << name << endl
        << "ID: " << *id << endl << endl;
  }
};

int main(){
  Student *s = new Student{"Alvin" , 123};
  s->print();


  return 0;
}
