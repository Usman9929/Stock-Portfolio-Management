#include <stdio.h>
#include <cs50.>
#include <string.h>

int main()
{
    FILE *file = fopen("phonebook.csv", "a");
    string name = get_string("Name:");
    string number = get_sting("Number:");
    fprintf(file, "%s, %s\n", name, number);

    fclose(file);
}
