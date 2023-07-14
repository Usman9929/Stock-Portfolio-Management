#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int count_latters(string text);
int count_words(string text);
int count_sentence(string text);

int main(void)
{
    string text = get_string("Text:");
    int total = count_latters(text);
    int total_word = count_words(text);
    int total_sentences = count_sentence(text);

    float L = (float) total / (float) count_words * 100;
    float S = (float) total_sentences / (float) count_words * 100;

    float index = 0.0588 * L 0.296 * S - 15.8;

    printf("%i\n%i\n%i\n", total, total_word, total_sentences);
}

int count_latters(string text)
{
    int total_latters = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isupper(text[i]) || islower(text[i]) || isalnum(text[i]))
        {
            total_latters++;
        }
    }
    return total_latters;
}

int count_words(string text)
{
    int total_words = 1;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ')
        {
            total_words++;
        }
    }
    return total_words;
}

int count_sentence(string text)
{
    int total_sentence = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            total_sentence++;
        }
    }
    return total_sentence;
}