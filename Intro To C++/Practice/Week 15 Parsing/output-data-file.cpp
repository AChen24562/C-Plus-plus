#include <iostream>
#include <fstream>
using namespace std;

int main(){
  string data = "1|2|3|4|5|6|7|8|9|10\nA|B|C|D|E|F|G|H|I|J\n!|@|#|$|%|^|&|*|(|)";
  ofstream fout("data1.txt");

  fout << data;
  fout.close();

    return 0;
}
