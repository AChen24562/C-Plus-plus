# include <stdio.h>
# include <stdlib.h>
# define SIZE 81
# define LIM 20
# define HALT ""

int stsrt(char* strings[], int);
int binsearch(char* word, char* tab[], int n);
main()
{
   static char input[LIM][SIZE];
   static char* ptstr[LIM];
   char srhstr[SIZE];
   int ct = 0;
   int k;
   int idx;

   printf("Input up to %d lines, and l wil sort them\n", LIM);
   printf("To stop, hit the [enter] key at a line's start.\n");

   while ((gets(input[ct]) != NULL) && strcmp(input[ct], HALT) != 0 && ct++ < LIM)
   {
      ptstr[ct - 1] = input[ct - 1];
   }

   for (k = 0; k < ct; k++)
      puts(ptstr[k]);

   stsrt(ptstr, ct);
   puts("\nHere is the sorted list:\n");
   for (k = 0; k < ct; k++)
   {
      puts(ptstr[k]);
   }

   printf("Enter the sting to search:");
   gets(srhstr);
   if ((idx = binsearch(srhstr, ptstr, k)) >= 0)
      printf("The string %s is found %dth positon in the ptsrt[%d]", srhstr, idx + 1, idx);
   else
   {

      printf("The string %s is not found", srhstr);
   }
}

int stsrt(char* strings[], int num)
{
   char* temp;
   int top, seek;

   for (top = 0; top < num - 1; top++)
      for (seek = top + 1; seek < num; seek++)
         if (strcmp(strings[top], strings[seek]) > 0)
         {
            temp = strings[top];
            strings[top] = strings[seek];
            strings[seek] = temp;
         }
    return 0;
}

int binsearch(char* word, char* tab[], int n)
{
   int cond;
   int low, high, mid;
   low = 0;
   high = n - 1;
   while (low <= high)
   {
      mid = (low + high) / 2;
      if ((cond = strcmp(word, tab[mid])) < 0)
         high = mid - 1;
      else if (cond > 0)
         low = mid + 1;
      else
         return mid;
   }
   return -1;
}