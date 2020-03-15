// Alex Chen
// Prof. Sun
// Homework 6 Part2

#include <iostream>
using namespace std;

int main(){
  int dim;

  cout << "Multiplication Table" << endl
  << "---------------------------------" << endl
  << "Enter a dimension: " ;
  cin >> dim;
  cout << endl;

do{


}while(true);

  for(int row = 1; row < dim +1; row++)
  {
    cout << "Row: " << row << ")";
    for (int col = 1; col < dim +1; col++)
    cout << " " << col * row << "\t";
    cout << endl;
  }
  /*int row, col;
  cout << "Enter the number of rows: ";
  cin >> row;
  cout <<"Enter the number of columns: ";
  cin >> col;
  int n = 1;

  for(int r=0; r < row; r++ )
  {
    cout << "Row: " << row << ")";
    for (int c =0; c < col; c ++)
    cout << n++ << "\t";
    cout << " " << col * row << "\t";
    cout << endl;
  } */
return 0;
}
