#include <iostream>
using namespace std;

int main(){
// Week 7 PE 8
/*int dim ;
cout << "Enter a dimension: ";
cin >> dim;
cout << endl << endl;

for(int r = 0; r < dim; r++){
  for(int c = 0; c < dim; c++){
  if(c == r)
    cout << "X\t";
  else
    cout << "-\t";
  }
  cout << endl;
}




cout << endl;*/

// Week 8 PE 9
/*int dim ;
cout << "Enter a dimension: ";
cin >> dim;
cout << endl << endl;

for(int r = 0; r < dim; r++){
  for(int c = 0; c < dim; c++){
  if(r == dim - c - 1)
    cout << "X\t";
  else
    cout << "-\t";
  }
  cout << endl;
}*/

//Pe 10
/*int dim ;
cout << "Enter a dimension: ";
cin >> dim;
cout << endl << endl;

for(int r = 0; r < dim; r++){
  for(int c = 0; c < dim; c++){
  if(r == dim - c - 1 || c == r)
    cout << "X\t";
  else
    cout << "-\t";
  }
  cout << endl;
}*/


//PE 11
/*int dim ;
cout << "Enter a dimension: ";
cin >> dim;
cout << endl << endl;

for(int r = 0; r < dim; r++){
  for(int c = 0; c < dim; c++){
  if((r == dim - c - 1 || c == r) && (r >= dim/2))
    cout << "X\t";
  else
    cout << "-\t";
  }
  cout << endl;
}*/

//PE 12
/*
int dim ;
cout << "Enter a dimension: ";
cin >> dim;
cout << endl << endl;

for(int r = 0; r < dim; r++){
  for(int c = 0; c < dim; c++){
  if(r == dim/2 || c == dim/2)
    cout << "X\t";
  else
    cout << "-\t";
  }
  cout << endl;
}*/

  return 0;
}
