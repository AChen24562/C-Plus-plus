#include <iostream>

using namespace std;

class Truck{
private:
  int weight;

public:
  Truck():Truck(0){}
  Truck(int w): weight(w){}

  void output()const{cout << weight << endl;}

  // For nonmember external: accessors are needed
  int getWeight()const {return weight;}

};
  // Overload for non member DIVISION
Truck operator/(const Truck& lhs, const Truck& rhs){
  return Truck(lhs.getWeight() / rhs.getWeight());
}


int main(){
  Truck t1{10};
  t1.output();
  (t1/ 5).output();


  return 0;


}
