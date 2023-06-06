#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int i;
    do
    {
        height = get_int("Height: ");
    }
    while(height < 0 || height >= 8);

    for( i = 0; i < height; i++)
    {
        for(int k = height-i-1; k > 0; k--)
        {
            printf(" ");
        }
        for(int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");
        for(int b = 0; b <= i; b++)
        {
            printf("#");
        }
        printf("\n");
    }
}