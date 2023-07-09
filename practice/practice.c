#include <stdio.h>

int main()
{
   int foo[5] = {30,40,59,30,23};
   int bar[5];
   int j;
   for(j = 0; j < 5; j++)
   {
      bar[j] = foo[j];
   }
   printf("%i\n", bar[j]);
}