#include <iostream>

// Stacks Last in first out
// start from the top
// One direction 

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
  Stack(): size(0), topNode(nullptr){}

  void print()const{
    Node *temp = topNode;
    while(temp != nullptr){
      std::cout << temp->getData() << " ";
      temp = temp->getNext();
    }
    std:: cout << std::endl;
  }

  bool empty()const{
    return size == 0;
  }

  int top()const{
    return topNode->getData();
  }

  void push(int n){
    Node *temp = new Node(n);
    temp->setNext(topNode);
    topNode = temp;
    size++;
  }

  void pop(){
    if(topNode == nullptr){
      return;
    }
    Node *temp = topNode;
    topNode = topNode->getNext();
    delete temp;
    size --;

  }


};


int main(){
  std::cout << std::endl;

  Stack s;                                // create a stack object

  s.push(10);                             // push elements onto stack in LIFO order
  s.push(20);                             // LIFO - last-in-first-out
  s.push(30);                             // FILO - first-in-last-out
  s.push(40);
  s.push(50);
  s.push(60);

  s.print();
  std::cout << "\n";

  s.pop();                                // remove elements from stack
  s.pop();

  s.print();
  std::cout << "\n";

  std::cout << std::endl;


  std::cout << std::endl << s.top();




  return 0;
}
