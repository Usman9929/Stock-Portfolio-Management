#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Input card number
    long n = get_long("Number: ");
    // Calculate the length
    int a = 0;
    long b = n;
    while (b > 0)
    {
        b = b / 10;
        a++;
    }
    // Check whether length is valid
    if (a != 13 && a != 15 && a != 16)
    {
        printf("INVALID\n");
        return 0;
    }
    // Calculate sum
    int sum1 = 0;
    int sum2 = 0;
    long c = n;
    int total = 0;
    int a1;
    int b2;
    int mod1;
    int mod2;
    do
    {
        // Remove last digit
        mod1 = c % 10;
        c = c / 10;
        sum1 = sum1 + mod1;
        // Remove second last digit
        mod2 = c % 10;
        c = c / 10;
        // 2 times second last digit and add digits to sum2
        mod2 = mod2 * 2;
        a1 = mod2 % 10;
        b2 = mod2 / 10;
        sum2 = sum2 + a1 + b2;
    }
    while (c > 0);
    total = sum1 + sum2;
    // Checking Luhn Algorithm
    if (total % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }
    // Starting digits
    long start = n;
    do
    {
        start = start / 10;
    }
    while (start > 100);
    // Checking starting digits for the card type
    if ((start / 10 == 5) && (0 < start % 10 && start % 10 < 6))
    {
        printf("MASTERCARD\n");
    }
    else if ((start / 10 == 3) && (start % 10 == 4 || start % 10 == 7))
    {
        printf("AMEX\n");
    }
    else if (start / 10 == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}