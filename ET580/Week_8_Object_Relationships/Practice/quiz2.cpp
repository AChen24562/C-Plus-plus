#include <iostream>
using namespace std;

class Bus{
private:
  string *name;
  int size;
  string *passengers;

public:
  Bus(string n, int s): size(s), name(new string(n)), passengers( new string[s]){}

  Bus(const Bus &b):
  size(b.size),
  name(new string( *(b.name) )), passengers(new string[b.size]){
    for(int i = 0; i <size; i++){
      *(passengers +i) = *(b.passengers+i);
    }
  }
  ~Bus(){
    cout << "Delete: " << endl;
    delete name;
  delete [] passengers;}

  void display() const{
    cout << *name << " " << name << endl;
    for(int i = 0; i <size; i++){
        cout << *(passengers +i)  << " "<<(passengers +i) <<endl;
    }
  }
};


int main(){
  Bus b1{"Daniel", 4};
  b1.display();

  Bus b2{b1};
  b2.display();





  return 0;

}
