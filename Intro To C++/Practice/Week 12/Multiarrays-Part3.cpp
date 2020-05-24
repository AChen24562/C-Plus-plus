#include <iostream>
using namespace std;

const int dim1 = 5;
const int dim2 =5;

// Function for using loop to populate array
void populate(int array[][dim2]){
  int begin =1;
  for(int i=0; i <dim1; i++){
    for(int j=0; j <dim2; j++){
      array[i][j]=begin++;
    }
  }

}

// Function to output array
void output(const int array[][dim2]){
    for(int i=0; i <dim1; i++){
      for(int j=0; j<dim2; j++){
        cout << array[i][j] << "\t";
      }
      cout << endl;
    }

}

int main(){
  // Declaring array
  int array[dim1][dim2];

  populate(array);
  output(array);


  cout << endl << endl << array[1][0];
  return 0;
}
