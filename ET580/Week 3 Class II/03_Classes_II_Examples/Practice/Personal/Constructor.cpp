#include <iostream>

using namespace std;

class Menu{
private:

  string name;
  float price;
  int quantity;
public:
  Menu(): Menu("noName", 0.0, 0){}
  Menu(string n): Menu(n , 0.0, 0){}
  Menu(string n, float p): Menu(n, p, 0){}
  Menu(string n, float p, int q): name(n), price(p), quantity(q){}


// Accessors
  string getName(){return name;}
  float getPrice(){return price;}
  int getQuantity(){return quantity;}
//Mutators
  void setName(string n){name =n;}
  void setPrice(float p) {price = p;}
  void setQuantity(int q){quantity = q;}

};

void display(Menu &m){
  cout <<"Menu Item: " <<m.getName() << endl
      << "Price: $" << m.getPrice() << endl
      << "Quantity: " << m.getQuantity() << endl <<endl;
}

int main(){
  cout.setf(ios::fixed);
  cout.precision(2);

  Menu m1{};
  display(m1);

  Menu m2{"Burger", 5.26};
  display(m2);

  Menu m3{"Fried"};
  display(m3);

  return 0;


}
