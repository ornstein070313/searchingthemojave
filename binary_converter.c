//make a program that converts decimal to binary number

#include <stdio.h>

int binary_converter(int number)
{
    int rem;
    int array[32];

    int index = 0;

    while(number>0)
    {
        array[index] = number%2;
        number /= 2;
        index++;
    }

    for(int z = index-1; z>=0; z--)
    {
        printf("%d", array[z]);
    }    
}

int main()
{
    int number;

    printf("Enter your number:");
    scanf("%d", &number);

    binary_converter(number);

}