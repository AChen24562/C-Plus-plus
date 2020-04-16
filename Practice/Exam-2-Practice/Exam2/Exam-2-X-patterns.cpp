/*#include <iostream>
using namespace std;

int main(){
// Week 7 PE 'B' Patterns with 'x'
// # 8
  const int dim = 5;

  for(int row = 0; row < dim; row++){
    for(int col = 0; col < dim; col++){
      if(row == col)
          cout << "X ";
      else
          cout << "- ";
    }
    cout << endl;
  }

cout << endl << endl;

// # 9
  const int dim2 = 8;

    for(int row2 = 0; row2 < dim2; row2++){
      for(int col2 = 0; col2 < dim2; col2++){
        if(row2 == dim2 - col2 -1)
            cout << "X ";
        else
            cout << "- ";
      }
      cout << endl;
    }
cout << endl << endl;

// #10
  const int dim3 =5;
cout << "Shape of 'x'" << endl;
    for(int row3 =0; row3 < dim3; row3++){
      for(int col3 =0; col3 < dim3; col3++){
        if(row3 == col3 || row3 == dim3 -col3 -1)
            cout << "X ";
        else
            cout << "- ";
      }
      cout << endl;
    }
cout << endl << endl;


// PE11
const int dim4 =5;
cout << "Shape of '^'" << endl;
for(int r4 = 0; r4 < dim4; r4++){
  for(int c4 =0; c4 < dim4; c4++){
    if((r4 == c4 || r4 == dim4-c4-1) && (r4 >= dim4/2))
      cout << "X ";
    else
      cout << "- ";
  }
  cout << endl;
}
  cout << endl << endl;


cout << "Shape of 'v'" << endl;
  for(int r4 = 0; r4 < dim4; r4++){
    for(int c4 =0; c4 < dim4; c4++){
      if((r4 == c4 || r4 == dim4-c4-1) && (r4 <= dim4/2))
        cout << "X ";
      else
        cout << "- ";
    }
    cout << endl;
  }
    cout << endl << endl;

cout << "Shape of V to the left" << endl;
for(int r4 = 0; r4 < dim4; r4++){
  for(int c4 =0; c4 < dim4; c4++){
    if((r4 == c4 || r4 == dim4-c4-1) && (c4 <= dim4/2))
      cout << "X ";
    else
      cout << "- ";
  }
  cout << endl;
}
  cout << endl << endl;


cout <<  "Shape of V to the right" << endl;
for(int r4 = 0; r4 < dim4; r4++){
  for(int c4 =0; c4 < dim4; c4++){
    if((r4 == c4 || r4 == dim4-c4-1) && (c4 >= dim4/2))
      cout << "X ";
    else
      cout << "- ";
  }
  cout << endl;
}
  cout << endl << endl;

// '+' pattern
  const int dim5 = 9;
  for(int r5=0; r5 < dim5; r5++){
    for(int c5=0; c5 <dim5; c5++){
      if(r5 == dim5/2 || c5 == dim5/2)
          cout << "X ";
      else
          cout << "- ";
    }
    cout << endl;
  }

  return 0;
}*/
