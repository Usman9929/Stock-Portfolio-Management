#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_latters(string text);

int main(void)
{
    string text = get_string("Text:");
    int total = count_latters(text);

    printf("%i\n", total);

}

int count_latters(string text)
{
    int total_latters = 0;
    for(int i = 0; i < strlen(text); i++)
    {
        if(isupper(text[i]) || islower(text[i]) || isalnum(text[i]))
        {
            total_latters = text[i];
        }
    }
    return total_latters;
}