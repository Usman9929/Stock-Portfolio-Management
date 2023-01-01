#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height:");   // Ask form the user to decide just how tall the pyramids should be.
    }
    while (height > 8 || height <= 0); // 

    for (int i = 0; i < height; i++)
    {
        for (int j = height - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int z = 0; z <= i; z++)
        {
            printf("#");
        }
        printf("\n");
    }
}