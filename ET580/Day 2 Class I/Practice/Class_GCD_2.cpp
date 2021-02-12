#include <iostream>

using namespace std;
class Rational{
private:
  int numerator;
  int denominator;
  int gcdRec(int n, int d); // Wraped function
public:
  int getnumerator();
  int getdenominator();

  void setnumerator(int num);
  void setdenominator(int denom);

  int gcdIter();
  int getgcd(); // Wrapper function for recursion
};
// Externally defined
int Rational::getnumerator() {return numerator;}
int Rational::getdenominator() {return denominator;}

void Rational::setnumerator(int num) {numerator = num;}
void Rational::setdenominator(int denom) {denominator = denom;}

// Wrapper
int Rational::getgcd(){
  return gcdRec(numerator, denominator);
}
// Wrapped
int Rational::gcdRec(int n, int d){ // Uses seperate copies of the variable
  if(d == 0)
    return n;
  return gcdRec(d, n % d);
}
// Wrapped function
int Rational::gcdIter(){
  int temp, a=numerator, b = denominator;
  while(b != 0){
    temp =b;
    b = a%b;
    a = temp;
  }
  return a;
}
// End if Externally defined



int main(){
  Rational nd{};

  nd.setnumerator(40);
  nd.setdenominator(24);



  cout << endl << nd.getnumerator() << endl <<nd.getdenominator() << endl;
  cout << "GCD via recurse is: "<< nd.getgcd() << endl; // Print via recursion
  cout << "GCD via iterative is: " << nd.gcdIter(); // Print via Iteration
  return 0;


}
