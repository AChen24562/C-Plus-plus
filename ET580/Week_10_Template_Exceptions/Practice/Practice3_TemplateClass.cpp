#include<iostream>
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
  cout << MathFunc<int, int, int>::subtract(3, 5) <<endl <<endl;

  cout << MathFunc<float, float, float>::add(2.5, 1.1) <<endl;
  cout << MathFunc<float, float, float>::subtract(2.5, 1.1) <<endl;

  cout << MathFunc<string, string ,string>::add("Hello", "l") <<endl;



  return 0;
}
