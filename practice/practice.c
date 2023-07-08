#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{
    string name = get_string("What is your name :");
    int n = strlen(name);
    printf("%i\n", n);
}