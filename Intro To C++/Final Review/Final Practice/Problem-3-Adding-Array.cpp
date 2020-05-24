#include <iostream>
using namespace std;

int sumArray(int array[], int amount, int answer){

  if(amount == 0){
    return answer;

  }
    else{
        amount --;
        answer += array[amount];
        return sumArray(array, amount, answer);
    }


}


int main(){
  const int size = 100;
  int amount = 10;
  int array[amount] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int answer =0;

  answer = sumArray(array,  amount, answer);
  cout << answer;


  return 0;
}
