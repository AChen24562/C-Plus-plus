#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

const int row =3;
const int col =3;


void display(const int array[][col]){
  for(int i=0; i < row; i++){
      for(int j=0; j < col; j++)
      cout << array[i][j] << " ";
      cout << endl;
  }
}

// Replace an element in a 2-d array
void replace(int array[][col], int row1, int col1, int newNum){

  if(row1 < row&& col1 < col){
    array[row1][col1] = newNum;
  }

  else
      cout << "Failed";
}

int main(){

  int array[row][col] = {{3,2,4}, {4,5,6}, {3,2,5}};


  display(array);

  replace(array, 2, 2, 10);
  cout << endl << endl;
  display(array);




      return 0;
}
