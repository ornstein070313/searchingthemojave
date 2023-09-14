#include <stdio.h>

int main()
{
    int x = 1000000, flag = 1, count = 0, a = 10;

    for(int n = 1; n<=x; n+=2)
    {

        for(int i = 3; i <= n/2; i+=2)
        {
            if(n%i == 0)
            {
                flag = 0;
                count++;

                if(count > 1)
                {
                    break;
                }
            }

            else
            {
                flag = 1;
            }   
        }
        
        if(count == 1)
            printf("%d\n", n);
            a = (n>a) ? n:a;
            
        
    
    count = 0;   
     
    }

    printf("%d", a);

}