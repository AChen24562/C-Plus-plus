#include <iostream>
using namespace std;

class DivZero{
private:
  const char *message;

public:
  DivZero():DivZero(""){}
  DivZero(const char *m): message(m){}

  const char* getMessage()const{return message;}

};
double divide(double n, double d){
  if(d == 0){throw DivZero("Denominator is 0. ");}
  return n/d;
}


int main(){
  int num = 1;
  int den = 0;

  try{
    cout << num << "/" << den << " " << divide(num, den);
  }
  catch(const DivZero &e){
    cerr << "Error " << e.getMessage() << endl;
  }




  return 0;
}
