#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int l;
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
        for(int b = 0; b < height; b++)
    {
        for(l = 0; l <= b; l++)
        {
            printf("..");
        }
        for(int c = height-l;c > 0; c--)
        {
            printf(".");
        }
        printf("\n");
    }
        printf("\n");
    }
}