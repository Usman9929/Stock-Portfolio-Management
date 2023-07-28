#include <cs50.h>
#include <stdio.h>

int main()
{
    int i, u, t, array[4] = {4, 19, 1, 3};
    for (u = 3; u > 0; u--)
    {
        for (i = 0; i < u; i++)
        {

            if (array[i] > array[i + 1])
            {
                t = array[i];
                array[i] = array[i + 1];
                array[i + 1] = t;
            }
        }
    }
        printf("Sorted Values \n");
        for(i = 0; i <= 3; i++)
        {
            printf("%i", array[i]);
            printf("\n");
        }
}