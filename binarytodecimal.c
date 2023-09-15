/*Write a C program to convert a decimal number into a binary number.*/

#include <stdio.h>

int main()
{
    int n, deci, binary = 0, rem, base = 1;

    printf("Enter decimal number: ");
    scanf("%d", &deci);

    n = deci;

    while(n > 0)
    {
        rem = n%2;

        n /= 2;

        binary += rem*base;

        base *= 10;
    }

    printf("The binary of %d is %d.",deci, binary);


}