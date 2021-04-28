#include <iostream>
using namespace std;
#include <cassert>

class SomeObj{
private:
  int id;

public:
  SomeObj();
  SomeObj(int i);

  int getID()const;
  void output()const;
};
SomeObj::SomeObj():SomeObj(0){}
SomeObj::SomeObj(int i): id(i){}

int SomeObj::getID()const{return id;}
void SomeObj::output()const{cout << "ID: " << id;}
// End of SomeObj-----------------------------------------------------------

// Template Class---------------------------------------------------------------
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
// end of Template Class----------------------------------------


// Externally defined Constructors/Functions----------------------------------------
template<typename T>
MyArray<T>:: MyArray():MyArray(10){}

template<typename T>
MyArray<T>:: MyArray(int cap):size(0){
  assert(cap >0);
  capacity=cap;
  data = new T[capacity]{};
}

// Externally Defined Functions
template<typename T>
int MyArray<T>::getSize()const{return size;}

template<typename T>
int MyArray<T>::getCap()const{return capacity;}

// Grow Function
template<typename T>
void MyArray<T>::grow(){
  capacity = (capacity*2)+1;
  T *newArray = new T[capacity]{};
  for(int i =0; i <size; i++){
    newArray[i] = data[i];
  }
  delete [] data;
  data = newArray;
}

// Get Index
template<typename T>
int MyArray<T>::getIndex(const T value)const{
  for(int i =0;i <size; i++){
    if( data[i] == value){
      return i;
    }
  }
  return -1;
}
// Push back
template <typename T>
void MyArray<T>::push_back(T value) { // In our case Accepts an object pointer
  grow(); // Calls grow in private because we create the array with 0 cap
  data[size] = value;
  size++;
}
// Erase
template <typename T>
void MyArray<T>::erase(const int index){
  for(int i =index; i <size; i++){
    data[i] = data[i +1];
  }
  size--;
}

// [] overload
template <typename T>
T& MyArray<T>::operator[](int index) {
    assert(index >=0 && index < size);
    return data[index];
}
template <typename T>
const T& MyArray<T>::operator[](int index) const {
    assert(index >=0 && index < size);
    return data[index];
}
// End of Externally Defined

// Big Three-------------------------------------------
// Copy
template <typename T>
MyArray<T>::MyArray(const MyArray &ma):
  capacity(ma.capacity),
  size(ma.capacity),
  data(new T[ma.capacity]{} ){
    for(int i =0; i<ma.size; i++){
      data[i] = ma.data[i];
    }
  }
// Assignment (=)
template <typename T>
MyArray<T>& MyArray<T>::operator=(const MyArray &ma){
  if(this != &ma){
    if(capacity != ma.capacity){
      capacity = ma.capacity;
      delete data;
      data = new T[capacity];
    }
    size = ma.size;
    for(int i =0; i <size; i++){
      data[i] = ma.data[i];
    }
  }
  return *this;
}
// Destructor
template <typename T>
MyArray<T>::~MyArray(){cout << "Destructor" <<endl;delete []data;}
// End of Big  Three -----------------------------------------------------------

// NonMember Print -------------------------------------------------------------
// print array non member function
template <typename T>
void print(const MyArray<T> &d) {
    for(int i=0; i<d.getSize();i++) {
        cout << d[i]->getID() << " ";
    }
    cout << "\n";
}

int main(){

  MyArray<SomeObj*> ObjectArray;
  for(int i =0; i< 10; i++){
    SomeObj *o = new SomeObj(i); // Creates new pointer after every iteration
    ObjectArray.push_back(o);
  }
  print(ObjectArray);


  return 0;
}
