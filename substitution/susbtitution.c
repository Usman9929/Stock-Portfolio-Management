#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./substitution key");
        return 1;
    }
    while(strlen(argv[]) < 26 || argv[])
    {
        printf("Key must contain 26 characters.");
        return 1;
    }
    for(int i = 0; i < strlen(argv); i++)
    {
        for(int j = 0; j < )
        if(argv[i] == argv[i])
        {
            printf("Key must not contain repeated charactors:");
            return 1;
        }
    }
}