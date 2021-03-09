#include <iostream>
#include <cassert>
#include <ctime>

using namespace std;

class Person{
private:
  const static int size = 5;
  static int test;
  float grades[size] = {10.2, 20.2, 30.2, 40.2, 50.2};

public:

  float& operator[](int index);


};
float& Person::operator[](int index){
  assert(index >= 0 && index < test);
  return grades[index];
}
int Person::test = 5;


int main(){
  Person p1{};
  cout << p1[4];



  return 0;

}
