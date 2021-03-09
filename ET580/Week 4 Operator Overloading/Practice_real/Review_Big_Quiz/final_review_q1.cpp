#include <iostream>
#include <ctime>

using namespace std;
class Truck{
private:
  int weight;

public:
  Truck():Truck(0){}
  Truck(int w): weight(w){}

  Truck& operator+=(const Truck& rhs);

  void display()const{
    cout << "Weight: " << weight << endl;
  }


};
Truck& Truck::operator+=(const Truck& rhs){
  weight += rhs.weight;
  return *this;
}

int main(){
  Truck t1{21};
  Truck t2{2};
  t1.display();
  t2.display();
  (t1+=t2).display();

  t1.display();
  t2.display();




  return 0;

}
