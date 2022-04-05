#include <iostream>

int largestNum(int num1, int num2, int num3){
  if(num1 < num2 && num2 > num3){
    return num2;
  }
  else if(num2 < num3){
    return num3;
  }
  return num1;

}

float averageFloat(float num1, float num2){
  /*
    sum = num1 + num2;
    average = sum / 2;
    return average;
  */

  return (num1 + num2 ) /2;
}

void sumDiff(int &num1, int &num2){
  int sum = num1 + num2;
  int diff = num1 - num2;

  num1 = sum;
  num2 = diff;


}


int main(){

  int num1 = 1;
  int num2 = 2;
  int num3 = 3;

  int largest = largestNum(num1, num2, num3);
  std::cout << "Largest number between 3 numbers: " << largestNum;

  float float1 = 2.1;
  float float2 = 3.2;
  float average = averageFloat(float1, float2);
  std::cout << std::endl  << "Average Between two floats: "<< averageFloat(2.1, 3.2) << std::endl;


  int numForSumDiff = 6;
  int numForSumDiff2 = 4;
  sumDiff(numForSumDiff, numForSumDiff2);
  std::cout << "Num1 now equals " << numForSumDiff << std::endl;


  std::cout << "Num2 now equals " << numForSumDiff2;




  return 0;
}
