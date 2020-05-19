#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main(){
  string line = "001|11110|0101";
  string newline;
  //vector <string> tokens;

  stringstream check1(line);
  string intermediate;

// '|' Delimiter (seperates batches)
  while(getline(check1, intermediate, '|'))
  {
    cout << intermediate << endl;
    newline += intermediate += ",";
    //tokens.push_back(intermediate);
  }

  /*for(int i=0; i < tokens.size(); i++){
    cout << tokens[i] << endl;
    newline += tokens[i] += ",";
  }*/

  cout << "Outputting File: 'output.txt'";
  ofstream fileout("output.txt");
  fileout << newline;
  fileout.close();


  return 0;
}
