#include <iostream>
using namespace std;

class Numbers{
private:
  int capacity;
  int *array;

public:
  Numbers(): Numbers(5){}
  Numbers(int c): capacity(c), array( new int[capacity]{} ){
    for(int i =0; i <capacity; i++){
      *(array+i) = 0;
    }
  }
  void populate();
  void display();
  // Big Three
  Numbers(const Numbers&n); // Copy
  Numbers& operator=(const Numbers &n); // Assignment
  ~Numbers(); // Destructor
};
// Copy
Numbers::Numbers(const Numbers&n):
  capacity(n.capacity),
  array(new int [capacity]{}){

    for(int i = 0; i <capacity; i++){
      *(array +i) = *(n.array+i);
    }
}

// Assignment
Numbers& Numbers::operator=(const Numbers &n){
  if(this != &n){
    if(capacity != n.capacity){
      delete [] array;
      capacity = n.capacity;
      array = new int[capacity]{};
    }

    for(int i =0; i <capacity; i++){
      *(array +i) = *(n.array +i);
    }
  }
  return *this;
}

// Destructor
Numbers::~Numbers(){
  delete [] array;
}
// End of class

void Numbers::display(){
  for(int i = 0; i <capacity; i++){
    cout << *(array+i) << " ";
  }
  cout << endl;
  for(int i = 0; i <capacity; i++){
    cout << (array+i) << " ";
  }
  cout << endl << endl;
}
void Numbers::populate(){
  for(int i = 0; i <capacity; i ++){
    *(array+i) = i *5;
  }
}



int main(){
  Numbers n1{};
  n1.display();

cout << "Copy: " << endl;
  Numbers n2 = n1;
  n2.populate();
  n2.display();

cout << "Assignment: " << endl;
  Numbers n3{};
  cout << "n3: " << endl;
  n3.display();
  n3 = n2;
  cout << "n3: " << endl;
  n3.display();

cout << "Assignment with different CAP: " << endl;
  Numbers n4{6};
  n4.populate();
  cout << "n4: "<<endl;
  n4.display();


  Numbers n5{3};
  cout << "n5: " <<endl;
  n5.display();

  n5 = n4;
  cout << "n5 = n4: " <<endl;
  n5.display();





  return 0;
}
