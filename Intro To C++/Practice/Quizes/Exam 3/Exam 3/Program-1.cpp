#include <iostream>
#include <ctime>
using namespace std;


void output(char data[],const int size){
  for(int i =0; i<size;i ++){
    cout << data[i] << "\t";
  }
}

void numStar(char data[], const int size){
  char star= '*';
  char num = '#';

  for(int i =0; i <size; i ++){
    int val = (int)data[i];

    if (val < 58 && val > 47){
      data[i] = num;
    }
    else {
      data[i] = star;
    }
  }
}

int main(){
 const int size = 6;
 char data[size] = {'0', '5', 'e', 't', '7','5'};

 output(data, size);
 cout << endl;
 numStar(data, size);
 output(data, size);




  return 0;
}
