#include <stdio.h>

void decimalToBinary(int decimal) {
    int binary[32];  // Assuming 32-bit binary representation is sufficient
    int i = 0;

    // Step 3: Perform repeated division
    while (decimal > 0) {
        binary[i] = decimal % 2;  // Step 4: Store remainder
        decimal = decimal / 2;
        i++;
    }

    // Step 5: Reverse the array and print the binary representation
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal);

    return 0;
}