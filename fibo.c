/*Write a program in C to display the n-th Fibonacci number. Note that i-th Fibonacci 
number is the sum of the previous two Fibonacci numbers i.e. it is the sum of (i-1)-th 
and (i-2)-th Fibonacci numbers. Assume that the 1st two Fibonacci numbers are 0 and 1, respectively. 
So Fibonacci series is: 0, 1, 2, 3, 5, 8, 13, .....
Sample input/output :
Enter n: 7
7-th Fibonacci number is: 13
*/

#include <stdio.h>

int main() 
{
    int n, count = 1, num1 = 0, num2 = 1, a;

    printf("Enter number: ");
    scanf("%d", &n);

    if(n == 1)
        {
            printf("The no. %d Fibonacci number is 0",n);
        }

    else
    {
        while(count < n)
        {
            a = num2;
            num2 += num1;
            num1 = a;

            count++;
        }
    
        printf("The no. %d Fibonacci number is %d",n, num2);
    }
}