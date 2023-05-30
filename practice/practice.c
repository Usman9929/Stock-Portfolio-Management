#include <cs50.h>
#include <stdio.h>
int main()
{
    int value1 = get_int("Please enter first value: ");
    int value2 = get_int("Please enter second value: ");
    int sum = (value1 + value2);
    float percentage = (sum/2);
    printf("The addition of %i and %i is %i and percentage is %f \n", value1, value2, sum, percentage);
}