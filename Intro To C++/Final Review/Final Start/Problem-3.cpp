#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

  void outputCal(string test, string file){
    string token, out;

    stringstream parse(test);

        ofstream fout(file);
    while(getline(parse, token, ',')){
      cout << "$" << token << endl;
      fout << "$" <<token << endl;
    }


  }


int main(){
  string test=  "10.51,33.66,48.84";
  string file = "out.txt";


  outputCal(test, file);




      return 0;
}
