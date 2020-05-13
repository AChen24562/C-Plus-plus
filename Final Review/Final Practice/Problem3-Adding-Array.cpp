#include <iostream>
using namespace std;

  int sumArray(int array[], int numElement){
    int sum =0;

    for(int i=0; i< numElement; i++){
      sum +=array[i];
    }


    return sum;
  }


int main(){
  const int size =100;
  int numElement =10;
  int sum;

  int array[numElement] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  sum = sumArray(array, numElement);
  cout << "Sum of the array: " << sum;

  return 0;
}
