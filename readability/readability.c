#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    string text = get_string("Text: ");

    int letters = 0;
    int words = 1;
    int sentences = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
        else if (text[i] == ' ')
        {
            words++;
        }
        else if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
    }
    float L = letters / words * 100;
    float S = sentences / words * 100;
    
    int index = 0.0588 * L - 0.296 * S - 15.8;
}