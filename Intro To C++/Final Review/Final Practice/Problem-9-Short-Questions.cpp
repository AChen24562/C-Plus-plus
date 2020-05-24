#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
using namespace std;

int main(){
// Part A
  cout << "Part a, Print a random number between -6 and 6 " << endl;
  srand(time(NULL));
  for(int i =0; i <20;i++){
  cout << rand() %13 -6 << endl;
}
  cout << endl;

//Part B
cout << "Part b, Print the first element of an array" << endl;
  const int size = 4;
  int array[size] = {4, 5, 1, 2};
  cout << array[0];

cout << endl << endl;

// Part C
cout << "Part C, Print out 1 if n is between 575 & 716 (exclusive)" << endl;
  int n = 576;
  if(n > 575 && n < 716) cout << 1;

cout << endl << endl;

// Part D
cout << "Part D, Print the integer value of a character 'c'. " << endl;
  char c = 'A';
  cout << int(c);

      return 0;
}
