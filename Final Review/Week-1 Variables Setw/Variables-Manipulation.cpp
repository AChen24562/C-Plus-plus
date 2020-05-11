#include <iostream>
using namespace std;


int main(){
  string name = "John Smith";
  cout << "Original name: " << name << endl << endl;

  // Insert a middle name at the 5th letter starting at 0
  name.insert(5, "Jay ");
  cout << "Name with Middle Name: " << name << endl << endl;

  // Append aan element to the end
  name.append(" Jr. ");
  cout << "Name with a suffix: " << name << endl << endl;


  // Replace. Couting from 0 to 5, and removing the next 3 letters
  name.replace(5, 3, "Joseph");
  cout << "Middle name replaced with 'Joseph': " << name << endl << endl;

  // Remove: Counting from 0 to 5, and remove the next 7 letters
  name.erase(5, 7);
  cout << "Remove middle name: " << name << endl << endl;



  return 0;
}
