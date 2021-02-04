#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
using namespace std;
/*Array without a labeled size, set to 0
  partially fill array, and run through a print loop that adjusts
  the size accordingly
  insert desired new value into array at any point I chose 0,
  call on the sorting function within the insert function
  Sorting algorithm will be a nested loop that starts at 0 and will increase
  when it's less  than size if one of the array values at the first loops index
  is less than the array value in the second loop index,switch them until the end
  then call a new print function that doesn't increment size such as the previous print
*/
// These are declared globally so other functions can call them
int tally = 0;
void sorting(int array[], const int size);
void new_print(int array[], const int size);
void insert(int array[], const int CAP, int &size, int value)
{
    int index = 0; // insert it at 0, no particular reason
    if (size < CAP && index >= 0 && index <= size)
    {
        for (int i = size; i > index; --i)
        {
            array[i] = array[i - 1];
        }
        array[index] = value;
        size++;
    }
    cout << endl;
    sorting(array, size);
    new_print(array, size);
}
void first_print(int array[], const int CAP, int &size)
{
    for (int i = 0; i < CAP; i++)
    {
        if (array[i] == 0)
        { // For the empty indexes
            break;
        }
        cout << array[i] << " ";
        size++;
    }
}
void sorting(int array[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int k = 0; k < size - 1; k++)
        {
            if (array[k] > array[i])
            {
                int temp = array[i];
                array[i] = array[k];
                array[k] = temp;
            }
            tally++;
        }
    }
}
void new_print(int array[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
int main()
{
    const int CAP = 20;
    int size = 0;
    int array[CAP] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    first_print(array, CAP, size);
    cout << endl;
    insert(array, CAP, size, 5);
    insert(array, CAP, size, 150);
    insert(array, CAP, size, 55);
    cout << "\n\nIterations Performed: " << tally;
    cout << endl;
    return 0;
}
