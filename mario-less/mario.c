#include <cs50.h>
#include <stdio.h>

int main(void)
{
 int n;
 do
 {
    n = get_int("Height: ");
 }
 while(n <= 0 || n > 8);

    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < ; j++)
        {
            for(int k = 0; k < n-1; k++)
            {
                printf(".");
            }
            printf("#");
        }
        printf("\n");
    }
}