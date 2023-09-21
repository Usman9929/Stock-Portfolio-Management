#include <stdio.h>
#include <stdlib.h>

#define BLOCK_SIZE 512 // from notes

int main(int argc, char *argv[])
{
    // Check for correct usage
    if (argc != 2)
    {
    // Print error messege if the program is not given the correct number of argument.
    printf("Usage: /recover IMAGE\n");
    return 1;
    }
    // Open the ferosonic image file specified in the command line arguments (NOTES).
    char *file argv[1];
    File *new_file = fopen(file, "r");
    if(new_file == NULL)
    {
        // Print 
    }
    // Initilize variable.
    // Flag to keep track of weather a JPEG has been found.
    // Counter of the number of JPEGs found.
    // Buffer to store a block of data from the forensic image(Notes)
    // Array to store the file name of the current JPEG
    // Pointer to the current JPEG File.


}