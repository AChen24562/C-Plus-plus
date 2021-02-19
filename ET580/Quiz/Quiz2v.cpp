#include <iostream>

using namespace std;

class Monster{

private:

string name;
int id;

public:

Monster();
string getName();
int getID();

void setName(string n);
void setID(int i);﻿﻿﻿

};
Monster::Monster(){﻿name = "NoName", id =0;}

string Monster::getName(){return name;}
int  Monster:: getID(){return id;}
void  Monster:: setName(string n){name = n;}
void  Monster:: setID(int i);{id = i;}

void display(Monster &m){

cout << endl <<"Name: " << m.getName() << endl << "ID: " << m.getID() << endl;

}

int main(){

Monster m1{};
m1.setName("Mike");
m1.setID(4932);
cout << m1.getName() << endl << m1.getID();

display(m1);



return 0;


}
