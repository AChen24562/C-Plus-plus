#include <iostream>
using namespace std;


void inputDim(int& r, int& c){
  cout << "Enter a row: ";
  cin >> r;
  cout << "Enter a Column: ";
  cin>> c;
  cout << endl;
}


void cTable(int row, int col){
  for(int r =0; r<row; r++){
    for(int c=0; c<col; c++)
    cout << "C ";
    cout << endl;
  }
}

int main(){
  int row, col;
      inputDim(row, col);

      cout << "Table: " << endl;

      cTable(row, col);



  return 0;
}
