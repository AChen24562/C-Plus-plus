// Alex Chen
// Prof. Sun
// Homework 9 (Exam Question 2)


#include <iostream>
using namespace std;

int main(){
  double min, max;
  int sum = 0;
  int counter =0;

  do{
    cout << "Specify a range of values (min/max) seperated by a space: ";
    cin >> min >> max;
    cout << endl << endl;

  if(min == (int)min && max == (int)max){
      if(min < max){
        break;
      }
      else{
        cout << "Max must be greater than min. Please re-enter." << endl;
      }
  }
else{
  cout << "Integers are required. Please re-enter." << endl;
}


}while(true);
// Prints out factors of 5
for(int i  = min; i < max; i++){
  if(i%5 == 0){
    sum += i;
    counter ++;
    cout << i << "\t";
  }
}
// Print information
  cout << endl<< endl << counter << " numbers with a factor of 5 are in this range"
       << endl << "The sum of these numbers are: " << sum
       << endl << "The average of these numbers are: " << sum/counter;
  return 0;
}
