#include <iostream>

// Double linked list
// Transvers backwards or forwards, but must start from the beginning or end
// Insert at any point

class Node{
private:
  int data;
  Node *next;
  Node *prev;

public:

  Node(const int & d): data(d), next(nullptr){}
  void setNext(Node *n){next = n;}
  void setPrev(Node *p){prev = p;}

  int getData()const{return data;}
  Node *getNext()const{return next;}
  Node *getPrev()const{return prev;}
  void getDataMem()const{std::cout << &data << " ";}
};

class LList{
private:
  Node *head;
  Node *tail;
  int size;

public:
  LList(): head(nullptr), tail(nullptr), size(0){}
// Accessors ------------------------------
  bool empty(){
    return head == nullptr;
  }
  int getSize()const{
    return size;
  }
  Node *front(){
    return head;
  }
  Node *back(){
    return tail;
  }

// End of Accessors --------------------------------------------

// Erase --------------------------------------------
void erase(int d) {
    if(head == nullptr) { return; }
    if(head->getData() == d) {
        pop_front();
        return;
    } else if(tail->getData() == d) {
        pop_back();
        return;
    }

    Node *previous = head;
    Node *current = head->getNext();

    while(current != nullptr && current->getData() != d) {
        previous = previous->getNext();
        current = current->getNext();
    }
    if(current != nullptr) {
        previous->setNext(current->getNext());
        current->getNext()->setPrev(previous);// test!!!!!!!!!!!!!!
        delete current;
        ++size;
    }
}
void erase(Node *d) {
    if(head->getData() == d->getData()) {
        pop_front();
        return;
    } else if(tail->getData() == d->getData()) {
        pop_back();
        return;
    }
    d->getPrev()->setNext(d->getNext()) ;
    d->getNext()->setPrev(d->getPrev());
    delete d;
}

// End of Erase -------------------------------------

// Insert-------------------------------------------------
void insert(int d, int n) {
    if(head == nullptr) { return; }
    if(head->getData() == d) {
        push_front(n);
        return;
    }
    if(tail->getData() == d) {
        push_back(n);
        return;
    }

    Node *previous = head;
    Node *current = head->getNext();

    while(current != nullptr && current->getData() != d) {
        previous = previous->getNext();
        current = current->getNext();
    }
    if(current != nullptr) {
        Node *temp = new Node(n);
        previous->setNext(temp);
        temp->setPrev(previous);
        temp->setNext(current) ;
        current->setPrev(temp);
        ++size;
    }
}
void insert(Node *d, int n) {
    if(head == nullptr) { return; }
    if(head->getData() == d->getData()) {
        push_front(n);
        return;
    }
    Node *temp = new Node(n);
    temp->setNext(d);
    temp->setPrev(d->getPrev());
    d->getPrev()->setNext(temp);
    d->setPrev(temp);
}
// end of Insert--------------------------------------------------------

// push ---------------------------------------------------------
  void push_front(int n) {
      Node *temp = new Node(n);
      if(head == nullptr) {
          tail = temp;
      } else {

          temp->setNext(head);
          head->setPrev(temp);                      // point head.prev to new node (inserts node before head)
      }
      head = temp;
      ++size;
  }
  void push_back(int n){
    if(head == nullptr) {
        push_front(n);
        return;
    }
    Node *temp = new Node(n);
    tail->setNext(temp);
    temp->setPrev(tail);
    tail = temp;
    ++size;
  }
// End of push ----------------------------------------------------------

//Pop-----------------------------------------------------------------
void pop_front(){
  if(head == nullptr){return;}
  Node *temp = head;
  head = head->getNext();
  delete temp;
  if(head != nullptr){
    head->setPrev(nullptr);
  }
  --size;
}
void pop_back(){
  if(head == nullptr){return ;}
  if(head == tail){
    pop_front();
    return;
  }
  else{
    Node *temp = tail;
    tail = tail->getPrev();
    tail->setNext(nullptr);
    delete temp;
    size --;

  }
}

// end of pop ---------------------------------------------------------

// Big Three--------------------------------------------------
  // Copy
  LList(const LList &l){
      head = nullptr;
      tail = nullptr;
      Node *current = l.head;
      for(int i = 0; current != nullptr; i ++){
        push_back(current->getData());
        current = current->getNext();
      }
    }

  // Assignment(=)
  LList & operator=(const LList &l){
    if(this != &l){
      Node *current = l.head;
      for(int i =0; current != nullptr; i ++){
        push_back(current->getData());
        current = current->getNext();
      }
    }
    return *this;
  }

  // Destructor
  ~LList(){

    while (head != nullptr){
      pop_back();

    }
    delete head;
    delete tail;
}

// End of big three -----------------------------------------------------
    void print() const {
        Node *current = head;
        while(current != nullptr) {
            std::cout << current->getData()<< " ";
            current = current->getNext();
        }
        std::cout << std::endl;
    }
    void printMem() const {
        Node *current = head;
        while(current != nullptr) {
            current->getDataMem();
            current = current->getNext();
        }
        std::cout << std::endl;
    }
    void printRev() const {
        Node *current = tail;
        while(current != nullptr) {
            std::cout << current->getData() << " ";
            current = current->getPrev();
        }
    }

};


int main(){
  /*
  LList l1{};
  l1.push_front(300);
  l1.push_front(200);
  l1.push_front(123);


  l1.push_back(500);
  l1.print();
  l1.printMem();

  l1.print();

  Node *current = l1.front();
  while(current != nullptr && current->getData() != 500){
      current=current->getNext();
  }
  l1.erase(current);
  l1.print();
*/
std::cout << std::endl;

LList list;

list.push_back(700);                        // append 700 (store at end)
list.push_back(900);                        // append 900
list.push_back(1100);                       // append 1100
list.push_front(300);                       // prepend 300 (store at beginning)
list.push_front(100);                       // prepend 100
list.push_front(50);                        // prepend 50
list.print();                               // print forward order
std::cout << std::endl;

list.erase(300);
std::cout<<std::endl;
list.print();

std::cout << "\n";
list.printRev(); // Issue print rev                           // print reverse order
std::cout << "\n\n";

list.pop_front();
list.pop_back();
list.print();
std::cout << "\n\n";


Node *current = list.front();                      // locate the node 300
while(current != nullptr && current->getData() != 300){
    current=current->getNext();
}
list.insert(current, 250);                          // insert 250 before 300 using pointer

current = list.front();                             // locate the node 900
while(current != nullptr && current->getData() != 900){
    current=current->getNext();
}
list.insert(current, 750);                          // insert 750 before 900 using pointer

list.print();
std::cout << "\n\n";


current = list.front();
while(current != nullptr && current->getData() != 300){  // locate the node 300
    current=current->getNext();
}
list.erase(current);                                // erase node 300 given pointer


while(current != nullptr && current->getData() != 900){  // locate the node 900
    current=current->getNext();
}
list.erase(current);                                // erase node 900 given pointer

list.print();

std::cout << std::endl;







  return 0;
}
