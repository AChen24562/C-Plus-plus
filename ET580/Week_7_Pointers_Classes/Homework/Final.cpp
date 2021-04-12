#include <iostream>
#include <cassert>
using namespace std;

class IntArr{
private:
  int capacity;
  int size;
  int *array;
  void grow();

public:
  // Constructor
  IntArr();
  IntArr(int c);

// Overload []
  int& operator[](int index);
  const int& operator[](int index) const;

  // Big Three
  IntArr(const IntArr &ia);
  IntArr& operator=(const IntArr &ia);
  ~IntArr();

// Accessors
  int getCapacity() const;
  int getSize() const;

  void push_back(int num);
  void pop_back();
};
// Accessors
int IntArr::getCapacity() const { return capacity; }
int IntArr::getSize() const { return size; }

// Constructor
IntArr::IntArr(): capacity(5), size(0), array( new int[5]{} ){}
IntArr::IntArr(int c): capacity(c), size(0){
  assert(capacity > 0);
  array = new int[c]{};
}

// [] overload
int& IntArr::operator[](int index){
  assert(index >= 0 && index <=size);
  return array[index];
}
const int& IntArr::operator[](int index) const{
  assert(index >= 0 && index <=size);
  return array[index];
}

// Big Three
// Copy
IntArr::IntArr(const IntArr &ia):
    capacity(ia.capacity),
    size(ia.size),
    array(new int[capacity]{} ){
      for(int i = 0; i <ia.size; i++){
        array[i] = ia.array[i];
      }
    }
// Assignment(=)
IntArr&IntArr::operator=(const IntArr &ia){
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
// Destructor
IntArr::~IntArr(){delete [] array;}

// Grow
void IntArr::grow(){
  capacity = (capacity * 2)+1;
  int *newArray = new int[capacity]{};
  for(int i =0; i <size; i ++){
    newArray[i] = array[i];
  }
  delete [] array;
  array = newArray;
}
// Pushback
void IntArr::push_back(int num){
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
// Popback
void IntArr::pop_back(){
  if(size != 0){
    size --;
  }
}

int main(){
  IntArr a{5};
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
  IntArr b = a;
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
