#include <iostream>
using namespace std;

class Num{
private:
  int num;
public:
  Num():Num(0){}
  Num(int n): num(n){}

// prefix
  Num &operator++(){
    ++num;
    return *this;
  }

// postfix
Num operator++(int){
  Num temp{num};
  ++num;
  return temp;
}

  int getNum()const{
    return num;
  }
  int operator*()const{
    return num;
  }

};

int main(){
  Num n{5};
  ++n;
  cout << n.getNum() <<endl;
  cout << *n;





  return 0;
}
