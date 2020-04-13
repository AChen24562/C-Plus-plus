8\#include <iostream>
using namespace std;
//Global Variables (A)
//const int DIMENSION = 7;

//(E)
int inputDimensions(){
    int d;
    cout << "Enter a dimension: ";
    cin >> d;
    cout << endl;
    return d;
}

// Global Function (A)
void displayTable1(int dim){
  for (int r =0; r < dim +1; r++){
    for (int c =0; c < dim; c++)
    cout << "C ";
    cout << endl;
  }
}


int main(){
  // Local variable
  //const int DIMENSION =7;

  int dim = inputDimensions();

  cout << "Table of C" << endl;
  displayTable1(dim);


  return 0;
}
