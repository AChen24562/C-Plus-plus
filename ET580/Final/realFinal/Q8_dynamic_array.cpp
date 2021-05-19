#include <iostream>

class LAN{
private:
  int gateway;
  int size;
  int *clients;

public:
  LAN(int g, int s): gateway(g), size(s), clients(new int[s]{} ){}

  // Copy
  LAN(const LAN &l):
    gateway(l.gateway),
    size(l.size),
    clients(new int[l.size]){
      for(int i =0; i <l.size; i ++){
        *(clients +i) = *(l.clients +i);
      }
    }

  // destructor
  ~LAN(){
    std::cout << "Destructor" << std::endl;
    delete [] clients;
  }

  void print()const{
    for(int i = 0; i <size; i ++){
      std::cout << *(clients + i) << " ";
    }
    std::cout << std::endl;
    for(int i = 0; i <size; i ++){
      std::cout << (clients + i) << " ";
    }
  }
};

int main(){
  LAN l1{0, 10};
  l1.print();

  std::cout<< std::endl;
  LAN l2{l1};
  l2.print();





  return 0;
}
