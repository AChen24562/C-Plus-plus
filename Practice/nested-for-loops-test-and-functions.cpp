#include <iostream>
using namespace std;

bool prime(int num);

int main(){
// Multiplication table
  double dim;

   cout << "Enter a dimension: ";
   cin >> dim;

for(int row = 1; row <= dim; row++){
  cout << "Row " << row << ") ";
  for(int col = 1; col <= dim; col++)
  cout << row * col << "\t";
  cout << endl;
}

  return 0;
}
