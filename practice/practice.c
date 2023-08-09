#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{
    FILE *file = fopen("phonebook.csv", "a");
    string name = get_string("Name:");
    string number = get_string("Number:");
    fprintf(file, "%s, %s\n", name, number);

    fclose(file);
}
