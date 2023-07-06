#include <stdio.h>
#include <cs50.h>

int main()
{
    int score[3];
    for (int i = 0; i < 3; i++)
    {
        score[i] = get_int("Score: ");
    }
    printf("Average %f", score[1] + score[2] + score[3] / 3.0);
}