#include <iostream>
using namespace std;

class Food{
protected:
  string *name;

public:
  Food():Food("NoName"){}
  Food(string n): name(new string(n) ){}

  string getName()const{return *name;}
  void setName(string n){
    delete name;
    name= new string(n);
  }

  // Big three
  //Copy
Food(const Food &f){
  cout << "Food Copy" << endl;
  name = new string( *(f.name) );
}
// Assignment(=)
Food &operator=(const Food &f){
  cout << "Food Assignment (=)" <<endl;
  if(this != &f){
    *name = *(f.name);
  }
  return *this;
}
// Destructor
~Food(){delete name;}
};


class Cake : public Food{
private:
  string *topping;
public:
  Cake(): Cake("NoFood","NoTopping"){}
  Cake(string n, string t): Food(n), topping(new string(t) ){}

  string getTopping()const{return *(topping);}
  void setTopping(string t){
    delete topping;
    topping = new string(t);
  }
// Big Three
//Copy
  Cake(const Cake &c):
  Food(c),
  topping(new string(*(c.topping)) ){
    cout << "Cake Copy" <<endl;
}

// assignment
Cake &operator=(const Cake &c){
  cout << "Cake Assignment(=)"<<endl;
  if(this != &c){
    Food::operator=(c);
    *(topping) = *(c.topping);
  }
  return *this;
}
~Cake(){delete topping;}
};

int main(){
  Cake c1{"Ice Cream Cake", "Chocolate Icing"};
  cout << c1.getName() << " " << c1.getTopping() << endl;
  c1.setName("Fruit Cake");
  cout << c1.getName() << " " << c1.getTopping() << endl << endl;


  Food f1{"Strawberry Shortcake"};
  cout << f1.getName() << endl;
  Food f2 = f1;
  cout << f2.getName() << endl << endl;

  Cake c2{"Strawberry Cake", "Vanilla Icing"};
  cout << "c2: " <<c2.getName() << " "<< c2.getTopping() << endl << endl;

  Cake c3{c2};
  cout << "c3{c2} " << c3.getName() << " "<< c3.getTopping() << endl << endl;

  c1 = c3;
  cout << "c1 = c3:" <<c1.getName() << " " << c1.getTopping() << endl;
  return 0;


}
