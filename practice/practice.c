#include <stdio.h>
#include <cs50.h>

int main()
{
    int a = 28;
    int b = 50;
    int *c = &a;

    *c = 14;
    c = &b;
    *c = 25;

    printf("a has the value of %i, loacted at %p\n", a, &a);
    printf("b has the value of %i, located at %p\n", b,  &b);
    printf("c has the value of %i, located at %p", c, &c);
}
