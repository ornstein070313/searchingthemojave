#include <stdio.h>

int main()
{
    int x = 2, n = 4, count = 0,fact = 1, term_b = 1;
    double sum = 0, term;

    for(int i = 1; i<=n; i++)
    {
        term_b = 1;
        fact = 1;
        
        for(int j = 1; j<=2*i-1; j++)
        {
            term_b*=x;
        }

        for(int z = 1; z<=i; z++)
        {
            fact*=z;
        }

        term = (double)term_b/fact;

        sum+=term;

        printf("%lf\n", term);
    }

    printf("%lf", sum);
}