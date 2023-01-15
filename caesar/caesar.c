#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    for(int i = 0; i < strlen(argv[1]); i++)
    {
        if(!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key");
            return 1;
        }
        int key = atoi(argv[1]);

        string plaintext = get_string("Plaintext: ");
        printf("Cipertext: ");

        for(int j = 0; j < strlen(plaintext); j++)
        {
            if(isupper(plaintext[j]))
            {
            printf("%c", (plaintext[j] - 65 + key) % 26);
            }
            else if(islower(plaintext[j]))
            {
                printf("%c", (plaintext[j] + key) % 26);
            }
            else
            {
                printf("%c", plaintext[j]);
            }
        }
        printf("\n");
    }

}