#include <stdio.h>
#include <cs50.h>

int main()
{
    int score[3];
    for (int i = 0; i < 3; i++)
    {
        score[i] = get_int("Score: ");
    }
    printf("Average %f\n", (score[0] + score[1] + score[2])/ (float) 3);
}