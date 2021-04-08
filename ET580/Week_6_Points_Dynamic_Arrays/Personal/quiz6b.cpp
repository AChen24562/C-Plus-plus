#include <iostream>
using namespace std;

int main(){
  int *array = new int[5]{1,2,3,4,5};
  for(int i =0; i <5; i ++){
    cout << *(array+i) << " ";
  }

  int temp = *(array+1);
  *(array +1) = *(array+3);
  *(array+3) = temp;

cout << endl;
  for(int i =0; i <5; i ++){
    cout << *(array+i) << " ";
  }

  return 0;
}
