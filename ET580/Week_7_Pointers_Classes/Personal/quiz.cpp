#include <iostream>
using namespace std;

class LAN{
private:
  int size;
  int *array;

public:
  LAN(): LAN(0){}
  LAN(int s): size(s), array( new int[size]{} ){}
  void display(){
    for(int i = 0; i <size; i++){
      cout << *(array+i) << " ";
    }
    cout << endl;
    for(int i = 0; i <size; i++){
      cout << (array+i) << " ";
    }
    cout << endl << endl;
  }

  LAN(const LAN &l):
    size(l.size), array(new int[size]{}) {}

  LAN & operator=(const LAN &l){
    if(this != &l){
      if(size != l.size){
        delete [] array;
        size = l.size;
        array = new int [l.size]{};
      }
      for(int i = 0; i <size; i ++){
        *(array+i) = *(l.array +i);
      }
    }
    return *this;
  }
};

int main(){
  LAN l1{3};
  LAN l2{l1};
  l2.display();

  LAN l5{10};
  l2 = l5;
  l5.display();
  l2.display();


  return 0;

}
