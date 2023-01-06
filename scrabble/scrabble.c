#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    if (score1 > score2)        // Check if Player one is winner.
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)   // Check if Player two is winner.
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");      // otherwise score of Player one and player two are equal.
    }
}

int compute_score(string word)
{
    // Compute and return score for string
    int score = 0;

    for (int i = 0; i < strlen(word); i++)
    {
        if (islower(word[i]))       // This is for lowercase alphabets.
        {
            score += POINTS[word[i] - 'a'];

        }
        if (isupper(word[i]))       // This is for uppercase alphabets.
        {
            score += POINTS[word[i] - 'A'];

        }
    }
    return score;    // It return the score to the compute_score Function.
}
