#include <iostream>
using namespace std;

int main(){
double dim;
cout << "Multiplication Table" << endl <<
     "---------------------------" << endl
     << "Enter a dimension: ";

cin >> dim;


for(int row =1; row <dim +1; row++){
  cout << "Row: " << row << ") ";

  for(int col = 1; col < dim +1; col ++)
  cout << col *row << "\t" ;
  cout << endl;
}





























/*
for(int row = 1; row < dim +1; row ++){
  cout << "Row: " << row << ")";
  for(int col=1; col < dim +1; col ++)
  cout << " " << col * row << "\t";
  cout << endl;
}*/

  return 0;
}
