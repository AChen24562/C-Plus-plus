#include <iostream>

class School{
protected:
  std:: string *level;

public:
  School(): School("NoLevel"){}
  School(std:: string l): level(new std::string(l)){}

  // Big Three
  School(const School &s){
    level = new std::string(*(s.level));
  }
  School &operator=(const School &s){
    if(this != &s){
      *level = *(s.level);
    }
    return *this;
  }

  ~School(){
    delete level;
  }

  void print()const{
    std:: cout << "Level: " << *level << std::endl;
  }
};

class University:public School{
private:
  std:: string *name;

public:
  University(): University("NoName", "NoLevel"){}
  University(std::string n, std::string l): name(new std::string(n)), School(l){}

  // Big three
  University(const University &u):
    School(u),
    name(new std::string(*(u.name))){}
  University&operator=(const University &u){
    if(this != &u){
      School::operator=(u);
      *(name) = *(u.name);
    }
    return *this;
  }
  ~University(){delete name;}

  void print()const{
    std::cout << "Level: " << *level << " Name: "<<*name << std::endl;
  }
};


int main(){
  University u1{"Higher education", "QCC"};
  u1.print();




  return 0;
}
