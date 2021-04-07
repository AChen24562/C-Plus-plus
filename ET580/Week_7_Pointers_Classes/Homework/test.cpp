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
    IntArr();
    IntArr(int c);

    int& operator[](int index);
    const int& operator[](int index) const;

    IntArr(const IntArr &intArray);
    IntArr& operator=(const IntArr &iArr);
    ~IntArr();

    int getCapacity() const;
    int getSize() const;

    void push_back(int num);
    void pop_back();
};


// Accessors
int IntArr::getCapacity() const { return capacity; }
int IntArr::getSize() const { return size; }

// Constructors
IntArr::IntArr(): capacity(5), size(0), array( new int[5]() ){}  // default
IntArr::IntArr(int c): capacity(c), size(0), array( new int[c]() ) {}; // one-parameter

// Copy Constructor
IntArr::IntArr(const IntArr &iArr): capacity(iArr.capacity), size(iArr.size), array( new int[iArr.size] ) {
  for(int i=0; i<iArr.size; ++i){
    array[i] = iArr.array[i];
  }

}


// Deconstructor
IntArr::~IntArr(){ delete [] array; }

// Grow Function
void IntArr::grow(){
    capacity = capacity*2+1;    // increase capacity
    int *newArr = new int[capacity];    // create new array using new capacity

    for(int i=0; i<size; ++i){
      newArr[i] = array[i];         // copy elements in orignal array into new array

    }

    delete [] array;    // delete original array to avoid memory leak
    array = newArr;     // reassign pointer to newArray of new capacity

}

// Subscript Overload
int& IntArr::operator[](int index){
  assert(index>=0 && index<size);   // validate index
  return array[index];              // return memory address of index by reference
}

// Subscript Overload for Const Objects
const int& IntArr::operator[](int index) const{
  assert(index>=0 && index<size);
  return array[index];
}

// Assignment Operator Overload  IntArr&
IntArr& IntArr::operator=(const IntArr &iArr){

    if(this != &iArr){    // compare memory addresses to check if objects are same

        if(size != iArr.size || capacity != iArr.capacity){  // check for equivalence
            capacity = iArr.capacity;   // reassign size in calling object
            size = iArr.size;           // reassign capacity in calling object

            delete [] array;            // delete array in calling object to avoid memory leak
            array = new int[capacity]; // reassign array to a new array of new capacity

        }

    // if both size and capacity are already equivalent, we can directly start copying data
        for(int i=0; i<iArr.size; ++i){
            array[i] = iArr.array[i];
        }
    }

    return *this;
}

void IntArr::push_back(int num){
    if(size == capacity){  // if the array is already full
      this->grow();        // grow the array (allocates a new location in memory as seen in the grow function)
      array[size]=num;    // append new element to end of array
      ++size;             // incrememnt size
    }else{                // if array not full
        array[size]=num;
        ++size;
    }
}

void IntArr::pop_back(){
    if(size>0){   // if array has data
    --size;       // decrement size
    }
}
int main(){
  cout << endl << endl;

  IntArr a{5};
  cout << "Test constructors and Push_Back" << endl;
  for (int i=0; i<5; ++i){ a.push_back( (i+1)*5 ); }
  cout << "Array A: ";
  for (int i=0; i<a.getSize(); ++i){ cout << a[i] << " "; }
  cout << "Size: " << a.getSize() << " Capacity: " << a.getCapacity() << endl;

  cout << "\nTest Grow For Elements 30 and 35" << endl;
  a.push_back(30);
  a.push_back(35);

  cout << "Array A: ";
  for (int i=0; i<a.getSize(); ++i){ cout << a[i] << " "; }
  cout << "Size: " << a.getSize() << " Capacity: " << a.getCapacity() << endl;


  cout << "\nTest Copy Constructor (IntArr b=a)" << endl;
  IntArr b = a;

  cout << "Array A: ";
  for (int i=0; i<a.getSize(); ++i){ cout << a[i] << " "; }
  cout << "Size: " << a.getSize() << " Capacity: " << a.getCapacity() << endl;

  cout << "Array B: ";
  for (int i=0; i<b.getSize(); ++i){ cout << b[i] << " "; }
  cout << "Size: " << b.getSize() << " Capacity: " << b.getCapacity() << endl;


  cout << "\n\nTest Pop_Back (pop last two elements)" << endl;
  b.pop_back();
  b.pop_back();

  cout << "Array B: " ;
  for (int i=0; i<b.getSize(); ++i){ cout << b[i] << " "; }
  cout << "Size: " << b.getSize() << " Capacity: " << b.getCapacity() << endl;

  cout << "\nTest Assignment Operator (a=b)" << endl;
  a = b;
  cout << "Array A: ";

  for (int i=0; i<a.getSize(); ++i){ cout << a[i] << " "; }
  cout << "Size: " << a.getSize() << " Capacity: " << a.getCapacity() << endl;

  cout << "Array B: ";
  for (int i=0; i<b.getSize(); ++i){ cout << b[i] << " "; }
  cout << "Size: " << b.getSize() << " Capacity: " << b.getCapacity() << endl;

  cout << endl << endl;


  return 0;
}
