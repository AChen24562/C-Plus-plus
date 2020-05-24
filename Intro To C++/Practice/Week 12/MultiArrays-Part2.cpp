#include <iostream>
using namespace std;

int main() {

//Multiarray parameters
  const int dim1 =5;
  const int dim2 =5;

  int array[dim1][dim2];


// Populate a multiarray with a loop
  int begin =10;
    for(int i=0; i < dim1; i++){
      for(int j =0; j <dim2; j++){

        array[i][j]= begin++;
        }
      }

// Displaying a multiarray
  for(int i =0; i <dim1; i++){
    for(int j =0; j <dim2; j++){
      cout << array[i][j] << " ";
    }
    cout << endl;
  }


return 0;
}
