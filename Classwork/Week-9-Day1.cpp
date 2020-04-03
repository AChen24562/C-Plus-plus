#include <iostream>
using namespace std;
//Global Variables (A)
//const int DIMENSION = 7;

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
  int dim;
  // Makes it run 2 more times (D)
  for(int i =0; i < 3; i++){
  cout << "Enter a dimension: ";
  cin >> dim;
  cout << endl;
  cout << "Table of C" << endl;
  displayTable1(dim);
}

  return 0;
}
