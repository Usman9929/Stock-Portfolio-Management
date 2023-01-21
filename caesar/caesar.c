#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // Check that there is one command-line argument.
    if(argc != 2)
    {
        printf("Usage: ./caesar Key\n");
        return 1;
    }

        // Define the key.
        string key = argv[1];

        // Check that the input is a digit.
        for(int i = 0; i < strlen(argv[i]); i++)
        {
            if(!isdigit(argv[1][i]))
            {
                printf("Usage: ./caesar Key\n");
                return 1;
            }
        }

        // Get Plaintext from the user.
        string plaintext = get_string("Plaintext: ");

        // Convert key to integer.
        int k = atoi(key);
        printf("cipertext: ");

        //Obtain Cipertext.
        for(int i = 0; i < strlen(plaintext); i++)
        {
            if(isupper(plaintext[i]))
            {
                printf("%c", (((plaintext[i] - 65) + k) % 26) + 65);
            }
            else if(islower(plaintext[i]))
            {
                printf("%c", (((plaintext[i] - 97) + k) % 26) + 97);
            }
            else
            {
                printf("%c", plaintext[i]);
            }
        }
        printf("\n");

}