#include <cs50.h>
#include <stdio.h>

int factorial(int fact);

int main()
{
    int fact1 = get_int("Enter value to find out his factorial:");
    int result = factorial(fact1);

    printf("%i",result);
    printf("\n");
}

int factorial(int fact)
{
    int j = 0;
    for(int i = 1; int k = fact; i <= fact; i++; k--)
    {
       j = k * i;
    }
    return j;
}