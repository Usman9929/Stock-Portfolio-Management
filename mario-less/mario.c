#include <cs50.h>
#include <stdio.h>

int main()
{
    int height;
    do
    {
        height = get_int("Height: ");
    }

    while (height > 8 || height <= 0);

    for (i = 0; i < height; i++)
    {
    for (k = height-1; k > 0; k--)

    for (j = 0; j <= i; j++)
    {
      printf("#");
    }
    printf("\n");
    }
}