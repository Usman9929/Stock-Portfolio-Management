#include <cs50.h>
#include <stdio.h>
int get_size();
void print_grid(int size);
int main()
{
    get_size();
    print_grid();
}

int get_size(void)
{
    int n
    do
    {
        printf("Size :");
    }
    while(n < 1);
    return n;
}

void print_grid(int size)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}