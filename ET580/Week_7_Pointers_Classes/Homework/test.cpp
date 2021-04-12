#include <iostream>
#include <cassert>
using namespace std;
class IntArr{
private:
    int capacity; // current capacity of the partially filled array
    int size;     // current number of values in the partially filled array
    int *array;  	// pointer to a dynamic partially filled array
    void grow(); 	// private function called by the push_back function when needed


public:
    IntArr();
    IntArr(int c);

    int& operator[](int index);
    const int& operator[](int index) const;

    IntArr(const IntArr &intArray);	// copy constructor (big three)
    IntArr& operator=(const IntArr &iArr); // assignment overload operator (big three)
    ~IntArr(); // destructor (big three)

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
IntArr::IntArr(int c): capacity(c), size(0) {
	assert(capacity > 0); // validate that capacity is a positive value
	array = new int[c]();	// create a dynamic array that can store c values
}; // one-parameter

// Copy Constructor
IntArr::IntArr(const IntArr &iArr):
capacity(iArr.capacity), size(iArr.size), array( new int[iArr.size] ) {
	// array(new int[iArr.size]) creates a new dynamic array for the new object
  for(int i=0; i=0 && index=0 && index0){           // if array has data
    	--size;             // decrement size
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
