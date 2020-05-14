#include <iostream>
#include <fstream>
using namespace std;

void outputfile(string fileName){
  ofstream fileout(fileName);
  fileout<< "This output file is made with a function\t";
  fileout.close();
}

int main(){
  string fileName = "output 1 fucntion.txt";
  outputfile(fileName);

  return 0;

}
