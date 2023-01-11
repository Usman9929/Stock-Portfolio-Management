#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, c;
    string str = get_string("Messege:");
    for (i = 0; str[i] != '\0'; i++)
    {
        c=str[i];
        for (j = 7; j+1>0; j--)
        {
    if (c>=(1<<j))
    {
        // Dark emoji
        c = c-(1<<j);
        printf("\U0001F7E1");
        //printf("\U000026AB");
    }
    else
    {
        // Light emoji
        printf("\U000026AB");
       // printf("\U0001F7E1");
    }
}
printf("\n");
    }
}
