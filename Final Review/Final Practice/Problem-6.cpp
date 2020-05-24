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


  int sum(int array[][col], int row){
    int answer =0;
    for(int i =0; i < col; i++){
    answer += array[row][i];
    }
    return answer;
  }

int main(){


  int array[row][col];
  populate(array);
  output(array);

cout << sum(array, 1);

    return 0;
}
