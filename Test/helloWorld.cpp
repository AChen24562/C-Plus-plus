#include <iostream>
using namespace std;
#include <vector>

int main(){

    vector<string> msg{"hello", "world"};
    int i = 1;
    string s = "this";
    cout << "Hello" << endl;
    for(const string& word:msg){
        cout<<word << " ";
    }
}