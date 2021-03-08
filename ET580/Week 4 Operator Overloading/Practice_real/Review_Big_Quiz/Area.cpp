#include <iostream>

using namespace std;

class Rectangle{
private:
  int length;
  int width;


public:
  Rectangle(): Rectangle(0, 0){}
  Rectangle(int l): Rectangle(l, 0){}
  Rectangle(int l, int w): length(l), width(w){}

  Rectangle operator*(const Rectangle& rhs);
  void display()const;
};

Rectangle Rectangle::operator*(const Rectangle& rhs){
  return Rectangle(length * rhs.length, width *rhs.length);
}
void Rectangle::display()const{
  cout << length << " " << width<< endl;
}

int main(){
  Rectangle r1{20, 1};
  r1.display();

  (r1 * (20, 20)).display();


  return 0;


}
