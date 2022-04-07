#include <stdio.h>

int max(int a, int b, int c);
float average(float a, float b);
void sumAndDifference(int* a, int* b);
int main() 
{
    int first_num = 100;
    int second_num = 90;
    int third_num = 290;
    float flt1 = 34.89;
    float flt2 = 44.99;

    int max_num = max(first_num, second_num, third_num);
    printf("4. max number is %d among %d, %d, and %d\n",max_num, first_num, second_num, third_num );
   
    float arg = average(flt1, flt2);
    printf("6. The average of %.2f and %.2f is: %.2f\n", flt1, flt2, arg);

    sumAndDifference(&first_num, &second_num);
    printf("10. first variable: %d, second variable: %d", first_num, second_num);
}
int max(int a, int b, int c) 
{
    int max = a;
    if (b > max) 
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }

    return max;
}
float average(float a, float b)
{
    return (a + b) / 2;
}
void sumAndDifference(int* a, int *b)
{
    int sum = *a + *b;
    int diff = *a >= *b ? *a - *b : *b - *a;
    *a = sum;
    *b = diff;
}