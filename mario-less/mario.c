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

    for (int i = 0; i < height; i++)
    {
    for (int k = height-1; k > 0; k--)

    for (int j = 0; j <= i; j++)
    {
      printf("#");
    }
    printf("\n");
    }
}