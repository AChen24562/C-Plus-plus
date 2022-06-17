#include <stdio.h>
#include <stdlib.h>
# define SIZE 81

int main(int argc, char const *argv[])
{
    char name[20];
    printf("Enter name: ");

    fgets(name, 20, stdin);
    printf("%s", name);

    return 0;
}
