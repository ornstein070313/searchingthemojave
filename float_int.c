#include <stdio.h>

int main()
{

double num, final_val;
int num_i;

printf("Enter a number:\n");
scanf("%lf", &num);

num_i = num / 1;

final_val = num - num_i;

if(final_val >= .5)
    printf("It's a float whose integer approximation is %d", num_i+1);

else if(final_val <= .5 && final_val > 0)
    printf("It's a float whose integer approximation is %d", num_i);

else if(final_val <= -.5 )
    printf("It's a float whose integer approximation is %d", num_i-1);

else if(final_val >= -.5 && final_val < 0)
    printf("It's a float whose integer approximation is %d", num_i);

else
    printf("It's an integer whose integer approximation is %d", num_i);

}