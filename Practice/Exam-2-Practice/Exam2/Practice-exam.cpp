#include <iostream>
using namespace std;

int main(){
  // Number 1
  const int dim = 9;

  cout << "Shape of V to the left" << endl;
  for(int row = 0; row < dim; row++){
    for(int col =0; col < dim; col++){
      if((row == col || row == dim-col-1) && (col <= dim/2))
        cout << "X ";
      else
        cout << "- ";
    }
    cout << endl;
  }
    cout << endl << endl;
    // Number 2: Display +6
    for(int i = 15; i <= 51; i += 6){
      cout << i << " ";
    }

  return 0;
}
