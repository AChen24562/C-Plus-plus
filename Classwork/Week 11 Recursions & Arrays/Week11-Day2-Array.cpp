#include <iostream>
using namespace std;

void populateArray(int num[], const int size){
  for(int i= 0; i < size; i++)
      num[i] = i +i;
}

void displayArray(int num[], const int size){
  for(int i =0; i<size; i++)
  cout << "myArray[" << i << "] = " << num[i] << endl;
}




int main(){

  //PE1
/*
    const int size =26;
    char letters[size];

    for(int i=0; i < size; i++){
      letters[i] = 65+i;
      cout << letters[i] << endl;

    }
    cout << endl << endl;
*/

//PE2
  /*  const int sizenum =10;
    int numbers[sizenum];

    for(int i=0; i < sizenum; i++){
      numbers[i] = i + i;
}
    for(int i=0; i < sizenum; i++){
      cout << "myArray[" << i << "] = " << numbers[i] << endl;
  }
*/


// PE3
  const int size = 10;
  int numbers[size];

  populateArray(numbers, size);

  displayArray(numbers, size);
  return 0;
}
