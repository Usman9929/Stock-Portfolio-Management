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

void text_to_int(string x)
{
    for(int i=0 , length = strlen(x); i<length; i++){
     arr[i]   =  (int) x[i];
    }
}


void int_to_binary(int ARR[], int length)
{   int n =0;
    int array_length = 0 ;
    for (int j = 0; j<length; j++){
     n = arr[j];
    for (int i = 0; n >=0; i++)
    {
        n /= 2;
        array[array_length] = (char) n%2;
        array_length++;

        if ( n == 1){
        array[array_length] = (char) '1';
        break;
        }
        else if (n == 0) {
            array[array_length] = (char) '0';
            break;
        }
    }
    }

}

// void print_bulb(int bit)
// {
//     if (bit == 0)
//     {
//         // Dark emoji
//         printf("\U000026AB");
//     }
//     else if (bit == 1)
//     {
//         // Light emoji
//         printf("\U0001F7E1");
//     }
// }