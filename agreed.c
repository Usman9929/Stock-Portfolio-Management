#include <stdio.h>
#include <cs50.h>
int main()
{
    char agree = get_char ("Do you agreed ?");
    if(agree == 'y')
    {
        printf("You agreed:");
    }
    else if(agree == 'n')
    {
        printf("Not Agreed:");
    }
}