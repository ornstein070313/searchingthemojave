#include <stdio.h>

int main()
{
    int n, div, rem = 0, rev = 0 , a, palindrome = 0, flag = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    a = n;

    while(n>0)
    {
        rem = n%10;
        rev = rev*10 + rem;
        n /= 10;
    }

    printf("\n The number is %d", rev);

    if(rev == a)
    {
        printf("\nThe number %d is a palindrome", a);
        palindrome = 1;
    }
    
    else
        printf("\nThe number %d is not a palindrome.", a);

    if(palindrome == 1)
    {
        for(int i = 2; i<=a/2; i++)
        {
            if(a%i == 0)
            {
                printf("\nThe number %d is not a prime.", a);
                flag = 0;
                break;
            }

            else 
                flag = 1;
        }

    }

    if(palindrome == 1 && flag == 1)
    {
        printf("\nThe number %d is a prime palindrome.", a);
    }

    else
        printf("\nThe number %d is not a prime palindrome.", a);


}