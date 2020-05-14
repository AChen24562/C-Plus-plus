#include <iostream>
#include <fstream>
using namespace std;


int main(){
  ofstream fileout("output 1.txt");
  fileout << "This is my first output file.\t";
  fileout.close();
}
