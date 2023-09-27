#include <cs50.h>
#include <stdio.h>

int main()
{
    int a[5] = {11, 6, 2, 9, 8};
    int item, j;
    for(int i = 2; i < 5; i++)
    {
        item = a[i];
        j = j - 1;
        while(item < a[j])
        {
            if(j == 0)
            {
            break;
            }
            else
            if(item < a[j])
            {
                a[j+1] = a[j];
            }
            j--;
        }
        a[j+1] = item;
    }
    for(int i = 2; i < 5; i++)
    {
        printf(a[i]);
        printf("\n");
    }
}