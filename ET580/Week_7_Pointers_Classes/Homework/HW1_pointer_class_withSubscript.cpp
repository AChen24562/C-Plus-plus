#include <iostream>
#include <cassert>
using namespace std;

class IntArray{
private:
  int capacity;
  int size;
  int *array;
  void grow(){
    capacity = (capacity * 2)+1;
    int *newArray = new int[capacity]{};
    for(int i =0; i <size; i ++){
      newArray[i] = array[i];
    }
    delete [] array;
    array = newArray;
  }

public:
  IntArray(): capacity(5), size(0), array( new int[capacity]{} ){}
  IntArray(int c): capacity(c), size(0), array( new int[capacity]{} ){}

// Test print
void printArr();

  // Overload Subscript
  int &operator[](int index){
    assert(index >= 0 && index <=size);
    return array[index];
  }
  // Const Subscript
  const int &operator[](int index)const{
    assert(index >= 0 && index <=size);
    return array[index];
  }

  // Copy constructor, Creates a new class object from an already existing
  //Class a = b
  // Class a{b}
  IntArray(const IntArray &ia):
    capacity(ia.capacity),
    size(ia.size),
    array(new int[capacity]{} ){
      for(int i = 0; i <ia.size; i++){
        array[i] = ia.array[i];
      }
    }
  // Assignment (=) operator, copy from a class object to another a = b
  IntArray& operator=(const IntArray &ia){
    if(this != &ia){

      if(size != ia.size){
        delete[] array;
        capacity = ia.capacity;
        size = ia.size;

        array = new int [ia.capacity]{};
    }

      for(int i =0; i < size; i ++){
        array[i] = ia.array[i];
      }
    }
    return *this;
  }
  // Destructor, delete dynamic memory whenever it goes out of scope
  ~IntArray(){
    delete [] array;
  }

// Push back
void push_back(int num){
  if(size == capacity){
    grow();
    *(array + size) = num;
    size++;
  }
  else{
    *(array + size) = num;
    size ++;
  }
}

// Popback, if array is not empty, size-1
void pop_back(){
  if(size != 0){
    size --;
  }
}
int getSize(){
  return size;
}
int getCapacity(){
  return capacity;
}
};

void IntArray::printArr(){
  for(int i =0; i < capacity; i ++){
    cout << *(array+i) << " ";
  }
  cout << endl;
  for(int i =0; i < capacity; i ++){
    cout << (array+i) << " ";
  }
  cout << endl ;
}

int main(){
  IntArray a{5};
  cout << "Test constructors and Push_Back" << endl;
  for (int i=0; i<5; ++i){ a.push_back( (i+1)*5 ); }
  cout << "Array A: ";
  for (int i=0; i<a.getSize(); ++i){ cout << a[i] << " "; }
  cout << "Size: " << a.getSize() << " Capacity: " << a.getCapacity() << endl;
  //a.printArr();

  cout << "\nTest Grow For Elements 30 and 35" << endl;
  a.push_back(30);
  a.push_back(35);
  cout << "Array A: ";
  for (int i=0; i<a.getSize(); ++i){ cout << a[i] << " "; }
  cout << "Size: " << a.getSize() << " Capacity: " << a.getCapacity() << endl;
  //a.printArr();

  cout << "\nTest Copy Constructor (IntArr b=a)" << endl;
  IntArray b = a;
  cout << "Array A: ";
  for (int i=0; i<a.getSize(); ++i){ cout << a[i] << " "; }
  cout << "Size: " << a.getSize() << " Capacity: " << a.getCapacity() << endl;
  cout << "Array B: ";
  for (int i=0; i<b.getSize(); ++i){ cout << b[i] << " "; }
  cout << "Size: " << b.getSize() << " Capacity: " << b.getCapacity() << endl;
  //a.printArr();
  //b.printArr();

  cout << "\n\nTest Pop_Back (pop last two elements)" << endl;
  b.pop_back();
  b.pop_back();
  cout << "Array A: ";
  for (int i=0; i<a.getSize(); ++i){ cout << a[i] << " "; }
  cout << "Size: " << a.getSize() << " Capacity: " << a.getCapacity() << endl;
  cout << "Array B: " ;
  for (int i=0; i<b.getSize(); ++i){ cout << b[i] << " "; }
  cout << "Size: " << b.getSize() << " Capacity: " << b.getCapacity() << endl;
  //a.printArr();
  //b.printArr();

  cout << "\nTest Assignment Operator (a=b)" << endl;
  a = b;
  cout << "Array A: ";
  for (int i=0; i<a.getSize(); ++i){ cout << a[i] << " "; }
  cout << "Size: " << a.getSize() << " Capacity: " << a.getCapacity() << endl;
  cout << "Array B: ";
  for (int i=0; i<b.getSize(); ++i){ cout << b[i] << " "; }
  cout << "Size: " << b.getSize() << " Capacity: " << b.getCapacity() << endl;
  //a.printArr();
  //b.printArr();

  cout << endl << endl;
  return 0;
}
