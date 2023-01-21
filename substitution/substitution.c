#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Check there is no command-line arguments.
    if( argc != 2)
    {
        printf("Usage: ./subtitution key\n");
        return 1;
    }

    // Validate that the key consist only of alphabets.
    string key = argv[1];
    int x = 0;
    while (x < strlen(key))
    {
        if (!isalpha(key[x]))
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }
        x++;
    }
    // Validate that the key consist of 26 charactor.
    if (strlen(key) != 26)
    {
        printf("Key must contains 26 characters\n");
        return 1;
    }
    // Validate that each alphbets in the key is unique.
    for (int i = 0; i < strlen(key); i++)
    {
        for (int j = i + 1; j < strlen(key); j++)
        {
            if (toupper(key[i]) == toupper(key[j]))
            {
                printf("Usage: ./substitution key\n");
                return 1;
            }
        }
    }
    // Prompt user for the plaintext.
    string plaintext = get_string("plaintext: ");

    // Convert all alphabets in the key to uppercase.
    int z = 0;
    while (z < strlen(key))
    {
        if (islower(key[z]))
        {
            key[z] = key[z] - 32;
        }
        z++;
    }

    // Print the cipertext.
    printf("ciphertext: ");

    int i = 0;
    while (i < strlen(plaintext))
    {
        if (isupper(plaintext[i]))
        {
            int letter = plaintext[i] - 65;
            printf("%c", key[letter]);
        }
        else if (islower(plaintext[i]))
        {
            int letter = plaintext[i] - 97;
            printf("%c", key[letter] + 32);
        }
        else printf("%c", plaintext[i]);
        i++;
    }
    printf("\n");
}