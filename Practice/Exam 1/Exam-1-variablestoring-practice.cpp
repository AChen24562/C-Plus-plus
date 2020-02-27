#include <iostream>
using namespace std;

int main(){
  string college = "Queens College";
  cout << endl << "Original: " << college << endl << endl;

// Inserting 'Community'
  college.insert(6, "borough Community");
  cout << college << endl;

// inserting cuny
  college.append(", CUNY");
  cout << college << endl;

// removing all except "Queensborough"
  college.erase(13, 50);
  cout << college;


  return 0;
}
