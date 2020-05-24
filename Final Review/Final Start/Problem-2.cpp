#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
using namespace std;

  const int dim =4;

  void input2D(int array[][dim]){
    srand(time(NULL));
    for(int r =0; r < dim; r++){
      for(int c =0; c<dim; c++){
        array[r][c] = rand() % 90 +10;
      }
    }
  }

  void output2D(const int array[][dim]){
    for(int r =0; r <dim; r++){
      for(int c =0; c<dim; c++){
        cout << array[r][c] << " ";
      }
      cout << endl;
    }
  }

  bool hasMoreEven(const int array[][dim], int& even, int& odd){
    bool hasEven =true;
      for(int r=0; r<dim; r++){
        for(int c=0; c<dim; c++){
          if(array[r][c] % 2==0){
            even ++;
          }
          else{
            odd++;

          }
        }
      }

      if(odd >even){
        hasEven =false;
        return hasEven;
      }
      else{
        return hasEven;
      }
  }


int main(){
  int even =0, odd=0;
  int array[dim][dim];

  input2D(array);
  output2D(array);


  if (hasMoreEven(array,even,odd)){
      cout << endl << even << " even integers VS " << odd << " odd integers.\n";
      cout << "\nMore even than odd in the 2D-array.\n\n";
    }
else{
    cout << endl << even << " even integers VS " << odd << " odd integers.\n";
    cout << "\nMore odd than even in the 2D-array.\n\n";
  }

      return 0;
}
