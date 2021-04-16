#include <iostream>
using namespace std;

class Book{
private:
  int pages;

public:
  Book():Book(0){}
  Book(int p): pages(p){}

  int getPages()const{return pages;}
  void setPages(int p){pages = p;}

  friend ostream& operator<<(ostream &out, Book &b);
};
ostream& operator<<(ostream &out, Book &b){
  out << "Pages: " << b.getPages();
  return out;
}

class Student{ // A Student has a book, but book can be sold
private:
  string name;
  Book *numPages;

public:
  Student():name("NoName"), numPages(nullptr){}
  Student(string n, int np): name(n), numPages(new Book(np)){}
  Student(string n, Book &b): name(n), numPages( &b){}

  string getName()const{return name;}
  void setName(string n){name = n;}

  Book *getPages()const{return numPages;}
  void setPages(Book &b){numPages = &b;}

  void display()const{
    cout << "Name of Student: " << name << endl
        << "TextBook Pages: " << numPages->getPages();
  }
};

int main(){
  Student s1{"Alvin", 524};
  s1.display();
  cout <<endl << *(s1.getPages());

  Book b1{114};
  cout << b1;


  return 0;
}
