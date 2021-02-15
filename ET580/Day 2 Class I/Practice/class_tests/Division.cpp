# include <iostream>
using namespace std;

class Division{
private:
  int num;
  int den;
  void recursiveCount(int n);// Wrapped

public:
  // Constructor
  Division(){
    num = 0;
    den = 0;
  }
  int getNum();
  int getDen();

  void setNum(int n);
  void setDen(int d);

  void getRecurCountNum();// Wrapper
  void getRecurCountDen();

};
// Externally define member function
int Division::getNum(){return num;}
int Division::getDen(){return den;}

void Division::setNum(int n){num = n;}
void Division::setDen(int d){den = d;}

// Wrapper function
void Division::getRecurCountNum(){
  recursiveCount(num);
}
void Division::getRecurCountDen(){
  recursiveCount(den);
}

// Wrapped Function
void Division::recursiveCount(int n){
  if(n == 1){
    cout << n;
    return;
  }
  cout << n << " ";
  return recursiveCount(n -1);
}


// End of externally defined

void printFrac(Division &d){
  cout <<d.getNum() <<"/" << d.getDen() << endl << endl;
}

int main(){
  Division d1;
  printFrac(d1);


  d1.setNum(5);
  d1.setDen(7);
  printFrac(d1);
  d1.getRecurCountNum();
  cout << endl;
  d1.getRecurCountDen();
  cout << endl;


  cout << endl << endl;
  return 0;
}
