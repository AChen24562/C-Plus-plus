#include <iostream>
using namespace std;

const int size = 4;


void outputDirections(const string a[], int size){
cout << endl << endl;
cout << "All array elements: ";
  for(int i=0; i<size; i++){
    cout << a[i] << " ";
  }

  cout << endl << "First element: " << a[0]
       << endl << "Last element: " << a[size-1];
}

void inputDirection(string a[]){
  for(int i=0; i<size; i++){
    cout << "Enter Direction " << i+1 << ": ";
    cin >> a[i];
  }

}

void replaceDirections(string a[], int index, string newDir){
      a[index] = newDir;

}


int main(){
string directions[size];
string myDirection = "QCC";

inputDirection(directions);

outputDirections(directions, size);

replaceDirections(directions, 3, myDirection);
outputDirections(directions, size);

  return 0;
}
