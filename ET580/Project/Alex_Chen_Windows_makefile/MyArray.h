#ifndef MYARRAY_H
#define MYARRAY_H

#include <iostream>

template<typename T>
class MyArray{
private:
  T *data;
  int capacity;
  int size;
  void grow();

public:
  MyArray();
  MyArray(int cap);

  int getSize()const;
  int getCap()const;

  int getIndex(const T value)const;
  void push_back(T value);

  void erase(const int index);

  T& operator[](int index);
  const T& operator[](int index) const;

  // Big Three
  MyArray(const MyArray &ma); //Copy
  MyArray& operator=(const MyArray &ma); // Assignment
  ~MyArray();
};

#endif
