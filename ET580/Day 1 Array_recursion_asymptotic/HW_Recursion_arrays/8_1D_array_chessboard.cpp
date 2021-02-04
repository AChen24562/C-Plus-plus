#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;
/*Steps:
nested for loop that start at zero, while the first one runs
the second loop prints '. ' until its value matches
with the value in the index of the array in the first loop
    so if the first loop  has value 0, this not only indicates the row
    its in, but also the index so lets say array[0] = 3
      the second loop runs and prints '. ' until j is equvilant to array[0],
      so in our case when j == 3, print a Q, and so on

at the end of each inner for loop endl to denote a new row
*/
void queen(int array[], const int SIZE){
  for(int i =0; i < SIZE; i++){
    for(int j =0; j< SIZE; j++){
      if(array[i] == j){
        cout << "Q ";
      }
      else{
        cout << ". ";
      }
    }
    cout << endl;
  }
  cout << endl;
}


int main(){

const int CAP = 4;
srand(time(NULL));
int random_value1 = rand() % CAP;
int random_value2 = rand() % CAP;
int random_value3 = rand() % CAP;
int random_value4 = rand() % CAP;

int array[CAP]= {random_value1, random_value2
                ,random_value3,random_value4};

queen(array,CAP);
cout << endl <<"Values are: " << random_value1 <<" "<< random_value2 <<" "
                << random_value3 << " "<<random_value4;
return 0;

}
