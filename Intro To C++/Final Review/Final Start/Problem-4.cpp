#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
using namespace std;

  void inputNum(int& n){
    n = rand() %10 +1;
  }

  void factorial(int n, int answer){
    if(n ==1 ){
      cout << answer;
    }
    else{
      answer *= n;
      n--;
      factorial(n, answer);
    }
  }

int main(){
  srand(time(NULL));

  int n;
  int answer =1;
  inputNum(n);
  cout << "n = " << n << endl;
  factorial(n, answer);





      return 0;
}
