#include <cs50.h>
#include <stdio.h>
#include <string.h>
const int BITS_IN_BYTE = 8;
// Function Prototype.
void print_bulb(char bit);
void array_reverse(char* input, char* outpu,int size);
void text_to_binary(string x);

// array prototypes
char binary_char[1000];
char reversed_binary[1000];
int main(void)
{
    //get input from  users
    string x = get_string("Messege:");

    // To calculate the length of the input.
    int lenght = strlen(x);

    // text to ASCII values and the binary.
    text_to_binary(x);

    // reversing the text arrary after each byte.
    void array_reverse(binary_char,reversed_binary_char,length * BITS_IN_BYTE);

    // printing hte light bulbs.
    int counter = 0;
    for (int i =0; i < length *BITS_IN_BYTE)
}