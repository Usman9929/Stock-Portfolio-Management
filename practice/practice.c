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

int factorial(int n)
{
    int result = 1;
    for(int k = 1; k <= n; k++)
    {
        result *= k;
    }
    return result;
}