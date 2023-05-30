#include <cs50.h>
#include <stdio.h>
int main()
{
    string answer = get_string("What is your name: ");
    string address = get_string("Where do you live: ");
    printf("Hello, %s,%s\n", answer, address);
}