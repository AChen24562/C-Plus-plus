#include <iostream>
using namespace std;

int main(){
  int minVal;
  int maxVal;

  cout << "Display a Range" << endl
       << "-----------------------------------" << endl;
  cout << "Enter a minimum integer between 1 and 100 (exclusive): ";
  cin >> minVal;
  cout << "Enter a Maximum integer between 1 and 100 (exclusive): ";
  cin >> maxVal;
    while(maxVal < 0 || minVal < 0){
      cout << "Values must be within specified range." << endl <<endl;
      cout << "Enter a minimum integer between 1 and 100 (exclusive): ";
      cin >> minVal;
      cout << "Enter a Maximum integer between 1 and 100 (exclusive): ";
      cin >> maxVal;






      for(int i = (maxVal - 1); i > minVal; i--){
        cout << i << endl;
        }
}










  return 0;
}
