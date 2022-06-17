#include <stdio.h>

int main(){

    int a = 10;
    int b = 20;
    int c = 30;

    int *pt1;
    int *pt2;
    int *pt3;

    int **pptr1, **pptr2, **pptr3;

    pt1 = &a;
    pt2 = &b;
    pt3 = &c;

    *pt2 = *pt1+20;
    *pt3 = *pt2;
    pptr1 = &pt1;
    pptr2 = &pt2;
    pptr3 = &pt3;

    *pt1 = **pptr2 + 10;

    printf("%d\n", a);
    printf("%d\n", b);

    printf("%u\t", pt2);
    printf("%u\n", &b);

    printf("%d\n", *pt2);
    printf("%d\n", *pt3);

    **pptr3 = *pt1 + * pt2;
    printf("%d\n", *pt3);

    printf("%u\n", *pptr1);
    printf("%u\t", pt1);
    printf("%u\t", &a);

    return 0;


}