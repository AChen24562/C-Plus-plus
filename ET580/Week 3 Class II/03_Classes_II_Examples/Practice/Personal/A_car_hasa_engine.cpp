#include <iostream>

using namespace std;
// A Car Has-a Engine
class Engine{
private:
  int horsepower;

public:
  Engine(): Engine(0){}
  Engine(int h): horsepower(h){}

  // Access/Mutate
  int getHP()const {return horsepower;}
  void setHP(int h){horsepower = h;}


};
// End of composite
class Car{
private:
 int seats;
 int windows;
 string name;

 Engine hp;
public:
  // Constructor
  Car(): Car(0, 0 ,"noName"){}
  Car(int s, int w, string n): seats(s), windows(w), name(n), hp(){}


  Car(int s, int w, string n, int h):seats(s), windows(w), name(n), hp(h){}
  // accepts Engine object
  Car(int s, int w, string n, Engine& h):seats(s), windows(w), name(n), hp(h){}
// Accessors
  int getSeat()const{return seats;}
  int getWindows()const {return windows;}
  string getName() const{return name;}
  int getHorse() const {return hp.getHP();}
// Mutators
  void setSeats(int s){seats = s;}
  void setWindows(int w){windows =w;}
  void setName(string n){name = n;}
};

void display(Car &c1){
  cout << "Seats: "<<c1.getSeat() << endl
  << "Windows: " <<c1.getWindows() << endl
  << "Name: " <<c1.getName() << endl
  << "Hosrsepower: " << c1.getHorse() << endl << endl;

}

int main(){
  Car c1{};
  display(c1);

  Car c2{4, 5, "Benz", 25};
  display(c2);

  Engine e1{45};
  cout << "Engine: " << e1.getHP() << endl << endl;

  Car c3{4, 5, "Benz"};
  display(c3);
  return 0;


}
