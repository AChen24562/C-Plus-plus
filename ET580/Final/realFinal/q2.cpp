#include <iostream>


template <typename T, typename U>
class SomeClass{
public:
  T element;
  SomeClass(T e): element(e){}
};

int main(){
  SomeClass<std::string, std::string> c1{"Hi"};
  std::cout << c1.element << std::endl;

  float *pi = new float(3.14);
  SomeClass<float *, float*> c2{pi};
  std::cout << *c2.element << std::endl;




return 0;
}
