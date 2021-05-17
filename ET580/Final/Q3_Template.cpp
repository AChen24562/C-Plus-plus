#include <iostream>
using namespace std;

template<typename T>
class MyArray{
private:
  T *data;
  int capacity;
  int size;
public:
  MyArray();
  MyArray(int cap);
  void push_back(T value);

  void display()const{
    for(int i = 0; i <size; i ++){
      cout << *(data +i) << " " ;
    }
    cout << endl;
  }
  MyArray(const MyArray &ma);

};
template<typename T>
MyArray<T>::MyArray():MyArray(10){}

template<typename T>
MyArray<T>::MyArray(int cap): capacity(cap), size(0),
  data(new T[capacity]) {}

// Pushback
template<typename T>
void MyArray<T>::push_back(T value){
  if(size == capacity){
    capacity = capacity *2;
  }
  *(data + size) = value;
  size++;
}

// Copy
template<typename T>
MyArray<T>::MyArray(const MyArray &ma):
  capacity(ma.capacity),
  size(ma.capacity),
  data(new T[ma.capacity]{}){
    for(int i =0;i<ma.size; i++){
      *(data +i) = *(ma.data +i);
    }
  }

int main(){
  MyArray<int> ma1{};
  ma1.push_back(1);
  ma1.push_back(2);
  ma1.push_back(3);
  ma1.push_back(4);
  ma1.push_back(5);
  ma1.push_back(6);
  ma1.push_back(7);
  ma1.push_back(8);
  ma1.push_back(9);
  ma1.push_back(10);
  ma1.push_back(11);
  ma1.push_back(12);

  ma1.display();




  return 0;
}
