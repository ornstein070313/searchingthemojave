//4.	Write a program in C to print the n-th prime number. For e.g. 10th prime is 29.

#include <stdio.h>

int main()
{
    int count = 0, flag = 1, n, a = 2, b;

    printf("Enter n:");
    scanf("%d", &n);

    for(int j = 1; count<n;j++)
    {
        for(int i = 2; i<=a/2; i++)
        {
            if(a%i == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            count++;
            b=a;
        }
        
        a++;
        flag = 1;
    }
    
    printf("The %d no. prime number is %d.",n, b);
}