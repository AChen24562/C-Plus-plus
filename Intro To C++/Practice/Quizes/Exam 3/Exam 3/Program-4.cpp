#include <iostream>
#include <ctime>
using namespace std;

// Random number Generation
int inputNum(int& random1, int& random2){
  srand(time(NULL));

  random1 = rand() % 4996 + 5; // Random number between
  // 5 - 5,000 Range is 4,995 (+1 if inclusive) then add the lowest amount
  random2 = rand() % 29998 + 3;


  return random1, random2;
}
// Swap values
int swapNum(int& random1, int& random2){
  int temp =random2;
  random2 = random1;
  random1 = temp;


  return random1, random2;
}

// Check if multiple of 575,000
bool isMult(int random1, int random2){
  bool ismult;
  if(575000 % random1 ==0 && 575000 % random2 ==0){
    ismult = true;
  }
else{
  ismult = false;
  }
  return ismult;
}

int main(){

  int random1, random2;
  cout << "Original Values: ";
  cout << endl;
  inputNum(random1, random2);


  cout << "Number 1 (5 - 5000) = " << random1;
  cout << endl;
  cout << "Number 2 (3 - 30,000) = " << random2 << endl << endl;

  swapNum(random1, random2);
  cout << "Swapped Values" << endl;
  cout << "Number 1 = " << random1 << endl;
  cout << "Number 2 = " << random2;

cout << endl << endl;
  bool ismult = isMult(random1, random2);

    if(ismult == true){
      cout << "575,000 is multiple of both " << random1 << " and "
           << random2;
    }
    else{
      cout << "575,000 is not multiple of both " << random1 << " and "
           << random2;
    }

  return 0;
}
