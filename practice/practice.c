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
    if(n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}