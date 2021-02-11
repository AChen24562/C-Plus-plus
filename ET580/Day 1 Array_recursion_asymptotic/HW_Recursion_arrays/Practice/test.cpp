#include <iostream>
using namespace std;
void func(int x) {
    if(x<10) {
        cout << x << "\n";
        return;
    }
    cout << x%10 << "\n";
    func(x/10);
}


int main(){
  func(710);

    return 0;


}
