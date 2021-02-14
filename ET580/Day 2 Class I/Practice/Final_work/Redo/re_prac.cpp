#include <iostream>

using namespace std;

class Rational{
private:
  int num;
  int den;
public:
  void setNum(int n);
  void setDen(int d);

  int getNum();
  int getDen();
};

//Externally define
void Rational::setNum(int n){num = n;}
void Rational::setDen(int d){den = d;}

int Rational::getNum(){return num;}
int Rational::getDen(){return den;}
// End of external

void displayFract(Ration &r){
  cout << r.getNum() << "/" << r.getDen() << endl;
}


int main(){
  Rational r1{};


  return 0;

}
