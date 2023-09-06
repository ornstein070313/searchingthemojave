#include <stdio.h>

int main()
{
    int n, rem,c_num, rev = 0; //n is for the input number, rem is for remainder and c_num is for the current number

    printf("Enter a number:");
    scanf("%d", &n);

    while(n>0)
    {
        rem = n%10;

        rev = rev*10 + rem;

        n /= 10;   
    }

    printf("%d", rev);


    while(rev>0)
    {
        switch(rev%10)
        {
            case 1:
            printf("One.");
            break;
            case 2:
            printf("Two.");
            break;
            case 3:
            printf("Three.");
            break;
            case 4:
            printf("Four.");
            break;
            case 5:
            printf("Five.");
            break;
            case 6:
            printf("Six.");
            break;
            case 7:
            printf("Seven.");
            break;
            case 8:
            printf("Eight.");
            break;
            case 9:
            printf("Nine.");
            break;
            case 0:
            printf("Zero.");
            break;
        }

        rev /=10;
    }


}