/*Write a C program to read a number from user and check whether given number is a prime palindrome or not.
A number is a palindrome if the number is the same as its reverse for e.g. 23432 is a palindrome 
but 2345 is not. A number is prime palindrome if it is both a prime number and a palindrome. 
For e.g., 23432 is not a prime palindrome, but 131 is a prime palindrome.*/

#include <stdio.h>

int main()
{
    int n, div, rem = 0, rev = 0, a, palindrome = 0, flag = 1;

    printf("Enter number:");
    scanf("%d", &n);

    a = n;

    while(a>0) //palindrome checker
    {
        rem = a%10;
        rev = rev*10 + rem;
        a /= 10;
    }

    if(rev == n)
    {
        palindrome = 1;
    }

    if(palindrome == 1) //prime checker
    {
        for(int i = 2; i<=n/2; i++)
        {
            if(n%i == 0)
            {
                flag = 0;
                break;
            }
        }

    }

    if(palindrome == 1 && flag == 1 && n != 1 && n != 0)
    {
        printf("The number %d is a prime palindrome.", n);
    }

    else
    {
        printf("The number %d is not a prime palindrome.", n);
    }

}