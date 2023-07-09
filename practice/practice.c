#include <stdio.h>

int main()
{
   int foo[4] = {30,40,59,30,23};
   int bar[4];
   for(int j = 0; j < 5; j++)
   {
      bar[j] = foo[j];
   }
   printf("%i", bar[j]);
}