#include <iostream>
using namespace std;

int* dangling_point(){
  int on_stack = 12;
  int *bad_pointer = &on_stack;
  return bad_pointer;
}

int* correct_pointer(){
  int *good_pointer = new int{123};
  return good_pointer;
}

int main(){

  int *p = new int(1);
  // Fix memory leak with :
  delete p;

  p = new int(2); // memory leak, previous wasn't deleted can never be accessed again
  cout << *p << endl;

//---------------------------------------------------------------
  int *bad_pointer = dangling_point();
  // points to a memory address that doesn't exist
  // original pointer was pointing to something on the stack/auto variable
  // gets deleted afterward
  cout << *bad_pointer<< endl;

// Correct method:
int *good_pointer = correct_pointer();
cout << *good_pointer << endl;


  return 0;
}
