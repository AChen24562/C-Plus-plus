#include <iostream>
using namespace std;

class Food{
protected:
  string *name;

public:
  Food():Food("NoName"){}
  Food(string n): name(new string(n)){}

  string getName()const{return *name;}
  void setName(string n){*name = n;}

  //Big Three
  // Copy
  Food(const Food &f):
    name(new string(*(f.name))){ cout << "Food Copy" << endl;}

  // Assignment (=)
  Food& operator=(const Food& f){
    if(this != &f){
      cout << "Food Assignment (=)" << endl;
      *(name) = *(f.name);
    }
    return *this;
  }
  // Destructor
  ~Food(){delete name;}

};

class Cake: public Food{
private:
  string *topping;

public:
  Cake(): Cake("NoName", "NoTopping"){}
  Cake(string n, string t): Food(n), topping(new string(t)){}

  string getTopping()const{return *topping;}
  void setTopping(string t){*topping = t;}

  // Big Three
  // Copy
  Cake(const Cake& s): Food(s), topping(new string(*(s.topping))){
    cout << "Cake Copy" << endl;
  }
  // Assignment (=)
  Cake &operator=(const Cake &c){
    if(this != &c){
      cout << "Cake Assignment (=)" << endl;
      *(topping) = *(c.topping);
    }
    return *this;
  }
  //Destructor
  ~Cake(){delete topping;}
};

int main(){
  Food f1{"Ice Cream Cake"};
  cout << f1.getName() << endl;

  Cake c1{"Ice Cream Cake", "Chocolate Icing"};
  cout << c1.getName() << " " << c1.getTopping() << endl <<endl;

  Cake c2{c1};
  cout << c2.getName() << " " << c2.getTopping() << endl <<endl;

  Cake c4{};
  c2 = c4;

  cout << c2.getName() << " " << c2.getTopping() << endl <<endl;
  return 0;
}
