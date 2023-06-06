#include <cs50.h>
#include <stdio.h>

int main()
{
    int n = get_int("Height: ");
    int j;
    for(int i = 0; i < n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("#");
        }
        for(int c = n-j;c > 0; c--)
        {
            printf(".");
        }
        printf("\n");
    }
}