#include <iostream>
#include <fstream>
using namespace std;



int main(){
  ofstream fout("test1.txt");
  fout << "This is a test";
  fout.close();



}
