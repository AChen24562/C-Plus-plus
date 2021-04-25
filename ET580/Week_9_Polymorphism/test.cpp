#include <iostream>
using namespace std;

class Animal{
protected:
  string *name;

public:
  Animal():Animal("NoName"){}
  Animal(string n):name(new string(n)){}

  virtual void display()const=0;

// Big Three
Animal(const Animal&a):
  name(new string (*(a.name))){cout << "Animal Copy:" <<endl;} // Copy

  // Assignment
Animal &operator=(const Animal& a){
  cout << "Animal Assignment" <<endl;
  if(this != &a){
    *name = *(a.name);
  }
  return *this;
}

// Destructor
  virtual ~Animal(){delete name;}
};

class Bird: public Animal{
private:
  int *wingspan;

public:
  Bird():Bird("NoName", 0){}
  Bird(string n, int w):Animal(n), wingspan(new int(w)){}

  void display()const override{
    cout << "Bird: " << *name << " Wingspan: " << *wingspan <<endl;
    cout << "Bird: " << name << " Wingspan: " << wingspan <<endl;
  }

  // Big Three
  Bird(const Bird &b):
    Animal(b), wingspan(new int(*(b.wingspan))){cout << "Bird Copy " <<endl;}

  Bird &operator=(const Bird &b){
    cout << "Bird Assignment =" <<endl;
    if(this != &b){
      Animal::operator=(b);
      *(wingspan) = *(b.wingspan);
    }
    return *this;
  }
  ~Bird(){delete wingspan;}
};

void print(const Animal &a){
  a.display();
}


int main(){
  Bird b1{"Hawk", 10};
  b1.display();
  cout <<endl;

  Bird b2{b1};
  b2.display();
  cout <<endl;

  Bird b3{};
  b3 = b1;
  b3.display();
  cout <<endl <<endl;

  Animal *a;
  Bird *b;
  b = new Bird{"Hawk", 70};
  a = b;
  a->display();
  b->display();
  print(*a);
  print(*b);


  return 0;
}
