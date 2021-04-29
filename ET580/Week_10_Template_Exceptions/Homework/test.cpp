#include <iostream>
#include <cassert>
using namespace std;

// someObj Class
class someObj{
private:
  int id;
public:
  someObj();
  someObj(int n);

  int getID() const ;
  void output() const ;

};
someObj::someObj():someObj(0){}
someObj::someObj(int n): id(n){}

int someObj::getID() const { return id; }
void someObj::output() const { cout << id << " "; }

// Templatized MyArray Class
template<typename T>
class MyArray {
private:
    T *data;                       // partially filled array of type T
    int capacity;
    int size;
    void grow();

public:
    MyArray();
    MyArray(int c);
    MyArray(MyArray<T> &o);
    T& operator[](int index);
    const T& operator[](int index) const;
    MyArray<T>& operator=(const MyArray &arrObj);
    void push_back(T e);
    int getSize() const;
    int getCapacity() const;
    int getIndex(const T n) const;
    void erase(int n);
    ~MyArray();

};


//  Externally defined member functions

template<typename T>       // must appear before each function
void MyArray<T>::grow(){                 // private grow function
  capacity = capacity*2+1;
  T *newArr = new T[capacity];
  for(int i=0; i<size; ++i){
      newArr[i] = data[i];
    }
  delete [] data;
  data = newArr;
  }
// Big Three

// COPY CONSTRUCTOR
template <typename T>
MyArray<T>::MyArray(MyArray &o):size(o.size), capacity(o.capacity), data(new T[o.capacity]){
    for(int i=0; i<o.size; ++i){
      *data[i] = *(o.data[i]);
    }
}

// ASSIGNMENT OVERLOAD
template <typename T>
MyArray<T>& MyArray<T>::operator=(const MyArray &arrObj){
      if(this != &arrObj){

        if(capacity != arrObj.capacity){
          capacity = arrObj.capacity;
          delete [] data;
          data = new T[capacity];
        }
      }

      size = arrObj.size;
      for(int i=0; i<size; ++i){
         *data[i] = *(arrObj.data[i]);
      }

  return *this;
}


// DEFAULT CONSTRUCTOR
template <typename T>
MyArray<T>::MyArray(): MyArray(10) {
}

// ONE PARAM CONSTRUCTOR
template <typename T>
MyArray<T>::MyArray(int c): size(0) {
    assert(c>0);
    capacity = c;
    data = new T[c];
}


// DESTRUCTOR
template <typename T>
MyArray<T>::~MyArray(){  delete [] data; }

// [] OVERLOAD
template <typename T>
T& MyArray<T>::operator[](int index) {
    assert(index >=0 && index < size);
    return data[index];
}
// CONST [] OVERLOAD
template <typename T>
const T& MyArray<T>::operator[](int index) const {
    assert(index >=0 && index < size);
    return data[index];
}
// PUSH BACK
template <typename T>
void MyArray<T>::push_back(T elem) {
  if(size == capacity){  // if the array is already full
      grow();           // grow the array
  }
    data[size] = elem;
    ++size;
}

// ERASE
template <typename T>
void MyArray<T>::erase(int n){
  for(int i=n; i<size-1; ++i){
      data[i] = data[i+1];
  }
  --size;
}


// GET INDEX
template <typename T>
int MyArray<T>::getIndex(const T elem) const {
  for (int i=0; i<size; ++i){
    if(data[i]== elem){
      return i;
    }
  }
  return -1;
}

// GET SIZE
template <typename T>
int MyArray<T>::getSize() const { return size; }
// GET CAPACITY
template <typename T>
int MyArray<T>::getCapacity() const { return capacity; }


// non-member functions
template <typename T>
void print(const MyArray<T> &d) {  // if T is not pointer type; array passed by reference
    for(int i=0; i<d.getSize();i++) {
        cout << d[i] << " ";
    }
    cout << "\n";
}

template <typename T>
void printPtrs(const MyArray<T> &d) { // if T is pointer type; array passed by reference
    for(int i=0; i<d.getSize();i++) {
         d[i]->output();
    }
    cout << "\n";
}

int main() {
    cout << "\n";

    MyArray<someObj*> objArray{};
    for(int i=0; i<10; ++i){
      someObj *newObj = new someObj(i);   // initialize someObj
      objArray.push_back(newObj);         // store the someObj mem address in the array
    }
    cout << endl << "objArray:\n";
    printPtrs(objArray);
    cout << endl;
    print(objArray);

    MyArray<someObj*> newArr{};

/*
// = Overload works when commented in
    for(int i=0; i<10; ++i){
      someObj *newObj = new someObj(i*5);  // initialize someObj
      newArr.push_back(newObj);     // store the someObj mem address in the array
    }
*/

    newArr = objArray;    // DOESNT WORK UNLESS someObjs have already been initialized in newArr

    cout << endl << "NewArr:\n";
    printPtrs(newArr);
    cout << endl;
    print(newArr);

    cout << endl;
    return 0;
}
