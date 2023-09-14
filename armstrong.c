#include <stdio.h>

int main()
{
    int low, high, sum = 0, a = 1, rem, count = 0, power,b,n;

    printf("Enter the range(lower to higher): ");
    scanf("%d %d", &low, &high);

    for(int i = low; i <=high; i++)
    {
        n=b=i;
        count = 0;
        sum = 0;
        a = 1;
    
        while(n>0)
        {
            n /= 10;
            count++;
        }

        power = count;

        while(b>0)
        {
            rem = b%10;

            b /= 10;

            for(int j = 1; j<=count; j++)
            {
                a *= rem;
            }
            
            sum += a;
            a = 1;
        }

        if(i == sum)
        {
            printf("%d ", i);
        }
    }

}