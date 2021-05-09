#include <iostream>

// First in First out FIFO
// a Supermarket Line
// Can only change the front and back node, nothing in the middle
// Add to back remove from the front
// Has pointers to the first and last node
// One direction front ----> back

class Node{
private:
  int data;
  Node *next;

public:
  Node(const int &d): data(d), next(nullptr){}

  void setNext(Node *n){next = n;}
  Node *getNext()const{return next;}

  int getData()const{return data;}
};

class Queue{
private:
  int size;
  Node *frontNode;
  Node *backNode;

public:
  Queue():  size(0),frontNode(nullptr), backNode(nullptr){}
  int front()const{return frontNode->getData();}
  int back()const{return backNode->getData();}

  void push(int n){
    Node *temp = new Node(n);
    if(frontNode == nullptr){
      frontNode = temp;
      backNode = temp;
    }
    else{
      backNode->setNext(temp);
      backNode = temp;
    }
    size++;
  }
  void pop(){
    if(frontNode == nullptr){return;}
    Node *temp = frontNode;
    frontNode = frontNode->getNext();
    delete temp;
    size--;
  }

  void print()const{
    Node *temp = frontNode;
    while(temp != nullptr){
      std::cout << temp->getData() << " ";
      temp = temp->getNext();
    }
    std::cout << std::endl;
  }
};

int main(){
  std::cout << std::endl;

  Queue q;

  q.push(100);
  q.push(200);
  q.push(300);
  q.push(400);
  q.push(500);
  q.push(600);
  q.push(700);
  q.print();
  std::cout << "\n\n";

  q.pop();
  q.pop();
  q.print();
  std::cout << "\n\n";

  std::cout << q.front() << "\n";
  std::cout << q.back() << "\n";

  std::cout << std::endl;
  q.print();


  return 0;
}
