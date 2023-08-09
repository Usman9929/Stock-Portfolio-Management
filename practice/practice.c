#include <stdio.h>
#include <cs50.h>

int factorial(int n);
int main()
{
    int fact = get_int("Enter factorial of a number:");
    printf("%i\n",factorial(fact));
}
int factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n * factorial(n-1);
}
