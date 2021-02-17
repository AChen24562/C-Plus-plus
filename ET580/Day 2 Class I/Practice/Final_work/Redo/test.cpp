#include <iostream>

using namespace std;
class Actor {
public:
    string name;
    int salary;
    Actor(){name ="Jerry"; salary = 15;}
    void setName(string n);

    string getName();
    int getSal(){return salary;}
};

void Actor::setName(string n){name = n;}

string Actor::getName(){return name;}

int main(){
Actor a;
a.name.('jim');
cout << a.getName();




  return 0;


}
