#include <iostream>
using namespace std;

int sumArray(int array[], int amount){
  int answer = 0;

  for(int i = 0; i < amount; i++){
    answer += array[i];
  }

  return answer;
}


int main(){
  const int size = 100;
  int amount = 10;
  int array[amount] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int answer;

  answer = sumArray(array,  amount);
  cout << answer;


  return 0;
}
