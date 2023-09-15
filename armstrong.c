/*Write a C program to find Armstrong Numbers within m and n where m, n are user inputs. 
A number n is called an Armstrong number if the sum of its digits’ to the power k is equal to n, 
where k is the number of digits in n. For e.g. 407 is an Armstrong number because 407 contains 
3 digits and 43+03+73 = 407. 1634 is also an Armstrong number because 1634 contains 4 digits 
and 1^4+6^4+3^4+4^4 = 1634.
Sample input/output :
Enter starting and ending range: 1 2000
Armstrong numbers between 1 and 2000 are:  1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634,
*/

#include <stdio.h>

int main()
{
    int low, high, sum = 0, a = 1, rem, count = 0, power, b, n;

    printf("Enter the range (lower to higher): ");
    scanf("%d %d", &low, &high);

    for(int i = low; i <= high; i++)
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

        while(i-low == 0)
        {
            printf("Armstrong numbers between %d and %d are: ", low, high);
            break;
        }

        if(i == sum)
        {
            printf("%d, ", i);
        }
    }

}