#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);
int 

int main(void)
{
    string x = get_string("Message");
    int value = string_to_int(x);
}
int string _to_int(string x)
{
    int counter = 0;
    for(int i = 0;length = strlen(x); i < length; i++)
    {
        couter = (int)x[i];
        printf("%i\t", counter);
    }
    return counter;
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
