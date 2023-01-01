#include <stdio.h>
#include <cs50.h>

int main()
{
    string name = get_string("What is your name? ");   // Get input from the user in this case ask the user name.
    printf("Hello, %s\n", name);      // Print the output on the Computer Screen in this case show the user name.
}