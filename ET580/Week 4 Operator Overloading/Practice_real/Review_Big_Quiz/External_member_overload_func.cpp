#include <iostream>

using namespace std;

class Truck{
private:
  int weight;

public:
  Truck():Truck(0){}
  Truck(int w): weight(w){}

// Write an external define member shortcut operator
  Truck& operator+=(const Truck& rhs);

  
//  Write an external defined prefix and postfix operator
  Truck& operator++(); // pre
  Truck operator++(int); // post

  void output()const{cout << weight << endl;}

};
// Write an external define member shortcut operator
Truck& Truck::operator+=(const Truck& rhs){
  weight += rhs.weight;
  return *this;
}

//  Write an external defined prefix and postfix operator
Truck& Truck::operator++(){// pre
  ++ weight;
  return *this;
}
Truck Truck::operator++(int){ // post
  Truck temp{weight};
  ++ weight;
  return temp;
}

int main(){
  Truck t1{10};
  t1.output();
  (t1 += 10).output();

  cout << "Postfix: ";
  (t1++).output();
  t1.output();

  cout << "Prefix: ";
  (++t1).output();
  t1.output();


  return 0;


}
