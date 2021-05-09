#include <iostream>

class Node{
private:
  int data;
  Node *next;
public:
  Node(const int &d): data(d), next(nullptr){}
  void setNext(Node *n){next = n;}

  int getData(){return data;}
  Node *getNext()const{return next;}
  void getDataMem()const{std::cout << &data << " ";}
};

class Stack{
private:
  int size;
  Node *topNode;
public:
  Stack();

  void print()const{
    Node *temp = topNode;
    while(temp != nullptr){
      std::cout << temp->getData() << " ";
      temp = temp->getNext();
    }
    std:: cout << std::endl;
  }

};


int main(){




  return 0;
}
