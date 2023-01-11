#include <cs50.h>
#include <stdio.h>
#include <string.h>


const int BITS_IN_BYTE = 8;
void print_bulb(int bit);
void text_to_int(string x);
void int_to_binary(int ARR[], int length);
int arr[]={};
char array[]={};
int main(void)
{
    string x = get_string("Message:");
    int Length = strlen(x);
    text_to_int(x);
    for (int i = 0; i<Length; i++){
        printf("%i\t", arr[i]);
    }
    int_to_binary(arr, Length);
    int counter = 0;
    for(int p = 0 ; p<Length; p++)
    {
        printf("%c\n",array[p]);
        counter++;

        if(counter == 8 ){
            printf("\n");
            counter = 0;
        }

    }
}