#include<iostream>
using namespace std ;
int main () {

  string  fullname ;
  cout<< "What is your full name? " ;
  getline(cin, fullname) ;


  cout<< "Hello, " + fullname << "." << endl << endl ;

  string day ;
  cout<< "What day is it today? " << endl << endl ;
  cin>> day ;
  cout<< "Today is, " << day << "." << endl;

  // indexing
  string course ;
  cout<< "What course is this? " ;
  cin>> course ;

  cout<< course.at(0) << endl ;
  cout<< course.at(1) << endl ;
  cout<< course.at(2) << endl ;
  cout<< course.at(3) << endl ;
  cout<< course.at(4) << endl ;
  


  return 0 ;
}
