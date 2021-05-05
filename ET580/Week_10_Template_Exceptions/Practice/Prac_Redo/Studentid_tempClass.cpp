#include <iostream>
using namespace std;

template<typename T, typename U>
class Student{
private:
  T id;

public:
  Student(): Student(0){}
  Student(T i): id(i){}

  void display()const{
    cout << id <<endl;
  }

  U getID()const{
    return id + 2;
  }

};

int main(){
  Student<int, int> s1{123};
  s1.display();

  cout << s1.getID();





  return 0;
}
