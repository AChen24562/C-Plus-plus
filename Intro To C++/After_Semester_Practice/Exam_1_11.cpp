#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;

int main(){
// # 11
cout << "#11" << endl;
string phrase  = "Queens College";

cout << "Original: " << phrase << endl << endl;

phrase.insert(6, "borough Community");
cout << phrase << endl;

phrase.append(", Cuny");
cout << phrase << endl;

phrase.erase(13);
cout << phrase << endl;


// #12
cout << endl << "#12" << endl;
char c;
cout << "Enter an uppercase letter: ";
cin >> c;

cout << "ASCII of \"" << c << "\": "<< int(c) << endl;
cout << "Lowercase equivalent: "<< char(c+32);
  return 0;

}
