#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int i;
    do
    {
        i = get_int ("Start Size: ");
    }
    while(i < 9);

    // TODO: Prompt for end size
    int j;
    do
    {
        j = get_int("End Size: ");
    }
    while(j <= 9);

    // TODO: Calculate number of years until we reach threshold
    int k;


    // TODO: Print number of years
    printf("Years: %i \n", i);
}
