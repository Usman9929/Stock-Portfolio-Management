#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");

    int count_letters = 0;
    int count_words = 1;
    int count_sentences = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            count_letters++;
        }
        else if (text[i] == ' ')
        {
            count_words++;
        }
        else if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            count_sentences++;
        }
    }
    float L = (float) count_letters / (float) count_words * 100;
    float S = (float) count_sentences / (float) count_words * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}