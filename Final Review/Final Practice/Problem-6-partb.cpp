#include <iostream>
using namespace std;

const int row = 3;
const int col =3;

  void populate(int array[][col]){
    int num =1;
    for(int r =0; r < row; r++){
      for(int c =0; c<col; c++)
      array[r][c] = num++;
    }
  }

  void output(const int array[][col]){
    for(int r =0; r < row; r++){
      for(int c =0; c<col; c++){
      cout << array[r][c] << " ";
      }
          cout << endl;
    }
  }

  bool check(int array[][col]){
    bool isEven = true;
    int numOdd =0;
    int numEven =0;

    for(int r=0; r <row; r++){
      for(int c =0; c < col; c++){
        if(array[r][c]%2 == 0){
          numEven++;
        }
        else{
          numOdd++;
        }

      }
    }

    if(numOdd > numEven){
      isEven = false;
      return isEven;
    }
    else{
      return isEven;
    }



  }

int main(){

  bool isEven = true;
  int array[row][col];
  populate(array);
  output(array);


  isEven = check(array);

  if(isEven == true){
    cout << endl << "The Above Array is True" <<endl;
  }
  else{
    cout  << endl << "The Above Array is False" << endl;
  }

    return 0;
}
