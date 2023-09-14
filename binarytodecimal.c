#include <stdio.h>

int main()
{
    int n = 232, decimal,binary = 0, rem, base = 1;

    while(n > 0)
    {
        rem = n%2;

        n /= 2;

        binary += rem*base;

        base *= 10;
    }

    printf("%d", binary);


}