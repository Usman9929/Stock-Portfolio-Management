#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height:");   // Ask form the user to decide just how tall the pyramids should be.
    }
    while (height > 8 || height <= 0); // Check the that the number is between 1 to 8. If not it will excute again and again.

    for (int i = 0; i < height; i++)  // This is parent loop.
    {
        for (int j = height - i-1; j > 0; j--)
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