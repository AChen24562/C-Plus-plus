#include <iostream>
using namespace std;

class Food{
protected:
  string *name;
public:
  Food(): Food("NoName"){}
  Food(string n): name(new string(n) ){}

  // Accessors/ Mutators
  string getName() const {return *name;}
  void setName(string n){
    delete name; // Deletes original value
    name = new string(n); // Assigns new value to dynamic memory
  }

  // Big Three
  // Copy
  Food(const Food &f){
    cout << "Food Copy Construcor" << endl;
    name = new string(*(f.name) );
  }
  // Assignment(=)
  Food &operator=(const Food &f){
    cout << "Food Assignment Overload (=)" << endl;
    if(this != &f){
      *name = *(f.name);
    }
    return *this;
  }
  // Destructor
  ~Food(){
    delete name;
  }

};

class Cake: public Food{ // Inherit class Cake is-a Food
private:
  string *topping;

public:
  Cake():Cake("NoName", "NoTopping"){}
  Cake(string n, string t): Food(n), topping(new string(t)){}

  // Accessors/Mutator
  string getTopping()const{return *topping;}
  void setTopping(string t){
    delete topping; // Deletes original value
    topping = new string(t); // Assigns new value to dynamic memory
  }

// Big Three
// Copy
  Cake(const Cake &c):
    Food(c), // Calls the copy constructor in Food, to copy the respected dynamic variables for that class
    topping( new string(*(c.topping)) ){
      cout << "Cake Copy Constructor" << endl;
    }
// Assignment(=)
  Cake& operator=(const Cake &c){
    cout << "Cake Assignment (=)" << endl;
    if(this != &c){
      Food::operator=(c); // Calls the (=) overload in Food, to re-assign the respected dynamic variables for that class
      *topping = *(c.topping);
    }
    return *this;
  }
// Destructor
  ~Cake(){
    delete topping;
  }

};



int main(){
  Food f1{"Ice Cream Cake"};
  cout << f1.getName() << endl;

  Cake c1{"Ice Cream Cake", "Chocolate Icing"};
  cout << c1.getName() << " " << c1.getTopping() << endl << endl;

  Cake c2{c1}; // Testing Copy Construtor
  cout << "c2: " <<c2.getName() << " " << c2.getTopping() << endl << endl;

  c1 = c2; // Testing Assignment
  cout << "c1: " <<c1.getName() << " " << c1.getTopping() << endl << endl;
return 0;


}
