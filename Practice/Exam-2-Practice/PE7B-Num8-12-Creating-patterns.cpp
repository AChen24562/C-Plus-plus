#include <iostream>
using namespace std;

int main(){
// Reference Classwork Week 8 day 1 quiz help
// Week 7 PE 'B'

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
    if(r2 == dim2 - c2 -1)
        cout << "X\t";
    else
        cout << "-\t";
  }
  cout << endl;
}
  cout << endl << endl;


// PE10
const int dim3 = 5;

for(int r3 = 0; r3 < dim3; r3++){
  for(int c3 =0; c3 < dim3; c3++){
    if(r3==c3 || r3 == dim3-c3-1)
        cout << "X\t";
    else
        cout << "-\t";
  }
  cout << endl;
}
//  PE11
const int dim4 =5;
for(int r4 = 0; r4 < dim4; r4++){
  for(int c4 =0; c4 < dim4; c4++){
    if((r4 == c4 || r4 == dim4-c4-1) && (r4 >= dim4/2))
      cout << "X\t";
    else
      cout << "-\t";
  }
  cout << endl;
}
  cout << endl << endl;


//PE12
  const int dim5 = 9;
  for(int r5=0; r5 < dim5; r5++){
    for(int c5=0; c5 <dim5; c5++){
      if(r5 == dim5/2 || c5 == dim5/2)
          cout << "X\t";
      else
          cout << "-\t";
    }
    cout << endl;
  }


  return 0;
}
