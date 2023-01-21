#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Check there is no command-line arguments.
    if(argc != 2)
    {
        printf("Usage: ./subtitution key\n");
        return 1;
    }

    // Validate that the key consist only of alphabets.
    string key = argv[1];
    for (int i = 0; i < strlen(key); i++)
    {
        if(!isaplha(key[i]))
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }
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
        }
    }
}