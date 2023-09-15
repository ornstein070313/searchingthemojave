/*	Calculate the sum of the following series, where x and n are provided as user inputs.
x^1/1!+x^3/2!-x^5/3!+x^7/3!⋯(up to n-th term)*/	


#include <stdio.h>

int main()
{
    int x, n, count = 1,fact = 1, term_b = 1;
    double sum = 0, term;

    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);

    for(int i = 1; i<=n; i++)
    {
        term_b = 1;
        fact = 1;
        
        for(int j = 1; j<=2*i-1; j++)
        {
            term_b *= x;
        }

        for(int z = 1; z<=i; z++)
        {
            fact *= z;
        }

        term = (double)term_b/fact;

        if(count == 1 || count%2 == 0)
        {
            sum += term;
            count++;
        }

        else
        {
            sum -= term;
            count++;
        }
        
    }

    printf("The sum upto term no. %d is %lf",n, sum);
}

