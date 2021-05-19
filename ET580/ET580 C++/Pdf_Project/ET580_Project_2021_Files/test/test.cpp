#include <iostream>
#include <cassert>


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
  if(size==capacity){
    grow(); // Calls grow in private because we create the array with 0 size
    data[size] = value;
    size++;
  }
  else{
    data[size] = value;
    size++;
  }
}
// Erase
template <typename T>
void MyArray<T>::erase(const int index){
  delete data[index];//-------------------------------- Might not be needed
  for(int i =index; i <size-1; i++){ // -------------------- Added -1
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
  size(ma.size),
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
      delete [] data;
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
MyArray<T>::~MyArray(){delete []data;}
// End of Big  Three -----------------------------------------------------------

// NonMember Print -------------------------------------------------------------
// print array non member function
template <typename T>
void print(const MyArray<T> &d) {
    for(int i=0; i<d.getSize();i++) {
        std::cout << d[i]->getID() << " ";
    }

    // Not needed below----------------------------------
    for(int i=0; i<d.getSize();i++) {
      std::cout <<d[i] <<" "; // Mem Addr
    }
    std::cout <<std::endl;
}

class Person{
protected:
  std::string name;
public:
  Person():Person("NoName"){}
  Person(std::string n): name(n){}

  virtual void setName(std::string n) =0;
  virtual std::string getName()const = 0;

};


class Passenger:public Person{
private:
public:
  Passenger();
  Passenger(std:: string n):Person(n){}

  void setName(std::string n)override{name = n;}
  std::string getName()const override{return name;}


};


int main(){
  Passenger *pas = new Passenger("Alvin");
  std:: cout <<pas->getName();




  return 0;
}
