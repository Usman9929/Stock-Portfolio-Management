#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    string text = get_string("Messege:");
    int decimal = 0;
    int binary[8];
    for(int i = 0; i < strlen(text); i++)
    {
        if(isupper(text[i]) || islower(text[i]))
        {
            decimal = text[i];
            while(decimal > 0)
            {
                binary[i] = decimal % 2;
                decimal = decimal / 2;
                i++;
            }

        }
    }
    printf("%i\n", decimal);

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
