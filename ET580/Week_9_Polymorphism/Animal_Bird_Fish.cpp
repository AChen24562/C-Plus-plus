#include <iostream>
using namespace std;

class Animal{
protected:
  string name;

public:
  Animal():Animal("NoName"){}
  Animal(string n):name(n){}

  virtual void display()const=0;
};

class Bird: public Animal{
private:
  int wingspan;

public:
  Bird():Bird("NoName", 0){}
  Bird(string n, int w):Animal(n), wingspan(w){}

  void display()const override{
    cout << "Bird: " << name << " Wingspan: " << wingspan <<endl;
  }
};

class Fish: public Animal{
private:
  int length;

public:
  Fish():Fish("NoName", 0){}
  Fish(string n, int l): Animal(n), length(l){}

  void display()const override{
    cout << "Fish: " << name << " Length: " << length <<endl;
  }

};


int main(){
  Animal *a;
  Bird *b = new Bird{"Eagle", 20};
  a = b;

  a->display();
  b->display();
  cout << endl <<endl;

  Fish f1{"Salmon", 30};
  Animal *a1 = &f1;
  a1->display();
  f1.display();

  cout << endl <<endl << "For Loop: " <<endl;
  Animal **aPrime = new Animal*[3];
  aPrime[0] = new Bird{"Hawk", 15};
  aPrime[1] = new Fish{"Tuna", 40};
  aPrime[2] = new Bird{"Pigeon", 4};

  for(int i =0; i <3; i++){
    aPrime[i]->display();
  }

  cout << endl <<endl <<"Slicing: " <<endl;
  Animal *a2;
  Bird *b2;
  b2 = new Bird{"Seagull", 5};
  a2 = b2;
  a2->display();
  b2->display();




  return 0;
}
