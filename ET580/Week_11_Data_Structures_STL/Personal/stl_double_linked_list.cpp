#include <iostream>
#include <list>

int main(){
  std::list<int> a;

  a.push_back(20);
  a.push_front(5);
  a.push_front(7);

  for(std::list<int>::iterator i = a.begin(); i != a.end(); i ++){
    std:: cout << *i << " ";
  }
  std::cout << std::endl;

  for(std::list<int>::reverse_iterator i = a.rbegin(); i != a.rend(); ++i ){
    std:: cout << *i << " ";
  }

  return 0;
}
