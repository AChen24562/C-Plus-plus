// Alex Chen
// Prof. Sun
// Homework 6 Part2

#include <iostream>
using namespace std;

int main(){
  double dim;
int counter = 3;

  cout << "Multiplication Table" << endl
  << "---------------------------------" << endl
  << "Enter a dimension: " ;
  cin >> dim;
  cout << endl;

do{



  if(dim == (int) dim){

      if(dim > 0){
        break;
      }
      else
      counter--;
      if(counter == 0){
        cout << "You have no more attempts. Ending Program..." << endl;
        return 0;
      }
      cout << endl <<"Dimension must be POSITIVE"
           << endl << "You have " << counter << " attempt(s)."
           << endl << "Enter a dimension: ";
        cin >> dim;


}
  else{
  counter--;
  if(counter == 0){
    cout << "You have no more attempts. Ending Program..." << endl;
    return 0;
  }
  cout << endl << "Dimension must be an INTEGER"
       << endl << "You have " << counter << " attempt(s)."
       << endl << "Enter a dimension: ";
       cin >> dim;
}








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
