#include <stdio.h>
#include <cs50.h>

int main()
{
    string name = get_string("What is your name? ");   // Get input from the user.
    printf("Hello, %s\n", name);   // Print the output on the Computer Screen.
}