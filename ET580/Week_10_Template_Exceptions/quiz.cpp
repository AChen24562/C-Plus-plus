#include <iostream>
using namespace std;

template <typename T>
class Obj{
public:
  T data;
  Obj(T d): data(d){}
  T getData() const {return data;}
  void setData(T d){data = d;}
};

int main(){
  Obj<string> ob1{"Hello"};
  cout << ob1.getData();
  ob1.setData("world");
  cout << endl << ob1.getData();



  return 0;
}
