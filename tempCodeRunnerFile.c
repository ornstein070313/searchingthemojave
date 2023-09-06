#include <stdio.h>

int main()
{
    int n = 1, flag = 1, count = 0, a;

    while(n<=10)
    {

        for(int i = 2; i <= n/2; i++)
        {
            if(n%i == 0)
            {
                flag = 0;
                count++;

                if(count > 1)
                {
                    n++;
                }

                else
                    a=n;
                    printf("%d", a);
            }

            else
                n++;

        }   

    }

}