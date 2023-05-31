#include <stdio.h>
#include <cs50.h>
int main()
{
    int x = get_int("Enter value for x:");
    int y = get_int("Enter value for y:");

    if(x<y)
    {
        printf("x is less than y\n");
    }
    else
    {
        printf("Y is less than X\n");
    }
}