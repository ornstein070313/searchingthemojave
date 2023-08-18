#include <stdio.h>

void decimalToBinary(int number) {
    if (number == 0) {
        printf("Binary representation: 0\n");
        return;
    }

    int binary[32]; // Array to store binary digits
    int index = 0;

    for(int j = 0; j<32; j++)
    {
        binary[j]=0;
    }

    while (number > 0) {
        binary[index] = number % 2;
        number /= 2;
        index++;
    }

    printf("Binary representation: ");
    for (int i = 32 - 1; i >= 0; --i) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    decimalToBinary(decimalNumber);

    return 0;
}
