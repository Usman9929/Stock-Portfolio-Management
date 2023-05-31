#include <stdio.h>
#include <cs50.h>
int main()
{
    char agree = get_char ("Do you agreed ?");
    if(agree == 'y' && agree =='Y')
    {
        printf("You agreed:");
    }
    else if(agree == 'n' && agree == 'N');
    {
        printf("Not Agreed:");
    }
    else
    {
        printf("Please Enter N for No and Y for Yes:");
    }
}