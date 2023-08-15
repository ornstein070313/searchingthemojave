#include <stdio.h>

int main(){

int num, rem2, rem5;

printf("Enter your number:\n");
scanf("%d", &num);

rem5 = num%5;
rem2 = num%2;

if(rem2==0 && !(rem5==0))
    printf("Valid. The number is only a multiple of 2");

else if(rem5==0 && !(rem2==0))
    printf("Valid. The number is only a multiple of 5");

else if(rem2==0 && rem5==0)
    printf("Invalid. The number is a multiple of both 2 and 5.");

else
    printf("The number is not a multiple of 2 or 5");

}

