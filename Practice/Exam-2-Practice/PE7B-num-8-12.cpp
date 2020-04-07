#include <iostream>
using namespace std;

int main(){
// Reference Classwork Week 8 day 1 quiz help

// PE8
// Create a const dim to 5
  const int dim =5;

  for(int r = 0; r<dim; r++){
    for(int c = 0; c < dim; c++){
      if(r == c)
          cout << "X \t";
      else
          cout << "-\t";
    }
    cout << endl;
  }

  cout << endl << endl;

// PE9
const int dim2 = 8;

for(int r2 = 0; r2 < dim2; r2++){
  for(int c2 =0; c2 < dim2; c2++){
    if(r2 == dim2 - c2 - 1)
        cout << "X\t";
    else
        cout << "-\t";
  }
  cout << endl;
}






  return 0;
}
