#include <iostream>
using namespace std;

//Stack Class push function
void push(int n){
  Node *temp = new Node(n);
  temp->setNext(topNode);
  topNode = temp;
  size++
}

// print function
void print()const{
  Node *temp = topNode;
  while(temp != nullptr){
    cout << temp->getData() << " ";
    temp = temp->getNext();
  }
}

int main(){




  return 0;
}
