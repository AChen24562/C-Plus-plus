#include <iostream>
using namespace std;
//Global Variables (A)
//const int DIMENSION = 7;

//(E)
void inputDimensions(int& r, int& c){
    cout << "Enter a row dimension: ";
    cin >> r;
    cout <<"Enter a column dimension: ";
    cin >> c;
    cout << endl;
}

// Global Function (A)
void displayTable1(int row, int col){
  for (int r =1; r < row +1; r++){
    for (int c =0; c < col; c++)
    cout << "C ";
    cout << endl;
  }
}


int main(){
  int row, col;
    inputDimensions(row,col);

  cout << "Table of C" << endl;
  displayTable1(row, col);


  return 0;
}
