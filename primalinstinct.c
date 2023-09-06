#include <stdio.h>

int main()
{
    int n, flag = 1; 

    printf("Enter the num: ");
    scanf("%d", &n);

    for(int i = 2; i<=n/2; i++)
    {
        if(n%i == 0)
        {
            flag = 0;
            break;
        }

        else
            flag = 1;
    }

    if(flag == 1)
        printf("%d is prime.", n);

    else
        printf("%d is not prime.", n);
}