#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

const int row =3;
const int col =3;


  void populate(int array[][col]){
    int num =1;
    for(int i=0; i < row; i++){
        for(int j=0; j < col; j++)
        array[i][j] = num++;
    }
  }

  void display(const int array[][col]){
    for(int i=0; i < row; i++){
        for(int j=0; j < col; j++)
        cout << array[i][j] << " ";
        cout << endl;
    }
  }

int main(){

  int array[row][col] = {{3,2,4}, {4,5,6}, {3,2,5}};

  //populate(array);
  display(array);


      return 0;
}
