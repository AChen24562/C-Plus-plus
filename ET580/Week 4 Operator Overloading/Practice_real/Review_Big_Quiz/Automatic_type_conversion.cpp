#include <iostream>

using namespace std;

class Truck{
private:
  int weight;

public:
  Truck():Truck(0){}
  Truck(int w): weight(w){}

  void output()const{cout << weight << endl;}

  friend Truck operator+(const Truck& lhs, const Truck& rhs);

};
Truck operator+(const Truck& lhs, const Truck& rhs){
  return Truck(lhs.weight + rhs.weight);
}


int main(){
  Truck t1{10};
  t1.output();
  (t1+ 5).output();


  return 0;


}
