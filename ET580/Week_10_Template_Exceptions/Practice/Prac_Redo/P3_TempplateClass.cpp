#include <iostream>
using namespace std;

template<typename T, typename U, typename V>
class MathFunc{
public:
  static V add(T num1, U num2);
  static V subtract(T num1, U num2);


};
template<typename T, typename U, typename V>
V MathFunc<T, U, V>::add(T num1, U num2){
  return num1 + num2;
}

template<typename T, typename U, typename V>
V MathFunc<T, U, V>::subtract(T num1, U num2){
  return num1 - num2;
}

int main(){
  cout << MathFunc<int, int, int>::add(1, 2) <<endl;
  cout << MathFunc<double, int, double>::add(1.2, 3) <<endl;



return 0;
}
