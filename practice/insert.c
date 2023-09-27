#include <cs50.h>
#include <stdio.h>

int main()
{
    int a[6] = {12, 13, 2, 5, 6, 3};
    int item, j;
    for(int i = 1; i < 5; i++)
    {
        item = a[i];
        j = i - 1;
        while(item < a[j])
        {
            if(item < a[j])
            {
                a[j+1] = a[j];
            }
            j--;
        }
        a[j+1] = item;
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%i",a[i]);
        printf("\n");
    }
}