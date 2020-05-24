/*#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
  string line, token;
  const int size =100;
  int array[size];
  int amount =0;

  ifstream fin("input.txt");

  while(getline(fin, line)){
      stringstream parse(line);

      while(getline(parse, token, '|')){
        stringstream converter(token);
        converter >> array[amount++];
      }
  }

fin.close();

for(int i =0; i < amount; i++){
  cout << array[i] << " ";
}
cout << endl;

// Adding all elements of array
int sum =0;
for(int i =0; i <amount; i ++){
  sum += array[i];
}
cout << "Sum: " << sum << endl;

// Average of the array;
double average = double(sum) / amount;
cout << "Average: " << average << endl;

  return 0;
}*/

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
  string token, line;
  const int size =100;
  int array[size];
  int amount = 0;

    ifstream fin("input.txt");
      while(getline(fin,line)){
        stringstream parse(line);

        while(getline(parse, token, '|')){
            stringstream converter(token);
            converter >> array[amount++];
        }

      }
              fin.close();

      for(int i=0; i <amount; i ++){
        cout << array[i] << " " << endl;
      }

// Sum
  int sum =0;

  for(int i=0; i <amount; i++){
    sum += array[i];
  }
cout << "Sum: "  << sum << endl;

//Average
cout << "Average: " << double(sum)/amount;



      return 0;
}
