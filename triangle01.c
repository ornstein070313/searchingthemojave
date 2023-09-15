/*       0
        01
       010
      0101
     01010
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++)
    {
        for(int z = 1; z<=n-i; z++)
        {
            printf(" ");
        }

         for(int j = 1; j<=i; j++)
        {
            printf("%d", (j+1)%2);
        }

        printf("\n");
    }

}