#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

string toBinary(int n)
{
    string r;
    while ( n!=0 ){
        r += ( (string)n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}

int main() {
    string str = get_string("Messege");

    for (int i = 0; i < str.length(); ++i) {
        cout << toBinary(str[i]) << " ";

        if (i % 6 == 0 && i != 0)
            cout << endl;
    }

    return EXIT_SUCCESS;
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
