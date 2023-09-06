#include <stdio.h>

int main()
{
    int sum = 0, a, rev=0, rem;

    scanf("%d", &a);

    do
    {
        rem = a%10;
        rev = rev*10+rem;
        a /=10;

    }
    while(a>0);

    printf("The num is %d", rev);
}