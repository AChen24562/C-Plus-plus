#include <iostream>
#include <ctime>
using namespace std;


void populateArray(int a[],const int CAPACITY){

  if(CAPACITY ==1){
    a[CAPACITY] = 1;
  }
  else{
  a[CAPACITY] = CAPACITY;
  populateArray(a, CAPACITY-1);
  }

}

void outputArray(int a[], const int CAPACITY){
  if(CAPACITY == 1){
    cout << a[CAPACITY];

  }
  else{
    cout << a[CAPACITY] << " ";
    outputArray(a, CAPACITY-1);
  }
}

int main(){

  const int CAPACITY =10;
  int a[CAPACITY];

  cout << endl;


  populateArray(a, CAPACITY);
  outputArray(a, CAPACITY);

  return 0;
}
