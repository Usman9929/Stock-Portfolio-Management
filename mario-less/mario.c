#include <cs50.h>
#include <stdio.h>

int main()
{
    int height;
    do
    {
        height = get_int("Height: ");  // It will ask the user for the Height.
    }

    while (height > 8 || height <= 0); // It will check that the user enter the digits from 1 to 8. If not the statement executed again.
    for (int i = 0; i < height; i++)
    {
        for (int k = height - i - 1; k > 0; k--) // Right-align that pyramid by pushing its hashes to the right by prefixing them with space.
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) // print Hashes (#)
        {
            printf("#");
        }
        printf("\n"); // Print new line after each hashes.
    }
}