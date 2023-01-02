#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height:");   // Ask form the user to decide just how tall the pyramids should be.
    }
    while (height > 8 || height <= 0); // Check that the number is between 1 to 8. If not it will excute again and again.

    for (int i = 0; i < height; i++)  // This is parent loop.
    {
        for (int j = height - i-1; j > 0; j--)  // This loop for to add some spaces from left side.
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)    // This loop for to print the hashas (#). The left one hashes.
        {
            printf("#");
        }
        printf("  ");                   // This statement for to add double spaces beteen each pyramids.
        for (int z = 0; z <= i; z++)    // // This loop for to print hashes (#). The right one hashes.
        {
            printf("#");
        }
        printf("\n");
    }
}