#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while(height < 0 || height >= 8);

    for(int i = 0; i < height; i++)
    {
        for(int k = height-i-1; k > 0; k--)
        {
            printf(" ");
        }
        for(int j = 0; j <= i; j++)
        {
            printf("#");
        }
        for(int l = 1; l < height; l++)
        {
            for(int f = 0; f < l; f++)
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}