#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string input = get_string("Message :");
    for(int i = 0; i <= input[i]; i++)
    {
        int val = input[i];
        int bin = 0, rem = 0, place = 1;
        while (val)
        {
            rem = val % 2;
            val = val / 2;
            bin = bin + (rem * place);
            place = place * 10;
        }
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
