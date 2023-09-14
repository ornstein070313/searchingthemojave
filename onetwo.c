#include <stdio.h>

int main()
{
    int n, a = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++)
    {
        for(int z = 1; z<=n-i; z++)
        {
            printf(" ");
        }

         for(int j = 1; j<=2*i-1; j++)
        {       
            printf("%d", a%10);
            a++;
        }

        printf("\n");
    }
}