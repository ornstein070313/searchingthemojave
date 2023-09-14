#include <stdio.h>

int main() //fix for cases of n being 1 and 0.
{
    int n, count = 1, num1 = 0, num2 = 1, a;

    printf("Enter number: ");
    scanf("%d", &n);

    while(count < n)
    {
        a = num2;
        num2 += num1;
        num1 = a;

        count++;
    }

    printf("%d", num2);
}