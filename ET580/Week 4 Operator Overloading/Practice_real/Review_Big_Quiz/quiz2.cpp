#include <iostream>
using namespace std;

class House{
private:
  int cost;

public:
  House(): House(0){}
  House(int c): cost(c){}

  friend ostream& operator<<(ostream& out, const House& h);
  // member overload

  int getCost()const{return cost;}
  void setCost(int c){cost = c;}

  House operator+(const House& rhs)const{
    return House(cost + rhs.cost);
  }
};

// friend overload
ostream& operator<<(ostream& out, const House& h){
    out << h.cost;
    return out;
}

int main(){
  House h1{55}, h2{35}, h3;

  h3.setCost((h1+h2).getCost());
  cout << h3 << endl;



  return 0;


}
