#include <stdio.h>

int main() 
{

int rem;

printf("Enter the amount:\n");
scanf("%d", &rem);

if(rem>= 1)
{

      if(rem >= 500)
      {
            printf("500: %d\n", rem/500);
            rem %= 500;
      }      
      else
            printf("500: 0\n");
      
      if(rem >= 100)
      {
            printf("100: %d\n", rem/100);
            rem %= 100;
      }      
      else
            printf("100: 0\n");
      
      if(rem >= 50)
      {
            printf("50: %d\n", rem/50);
            rem %= 50;
      }      
      else
            printf("50: 0\n");
      
      if(rem >= 20)
      {
            printf("20: %d\n", rem/20);
            rem %= 20;
      }      
      else
            printf("20: 0\n");
      
      if(rem >= 10)
      {
            printf("10: %d\n", rem/10);
            rem %= 10;
      }      
      else
            printf("10: 0\n");
      
      if(rem >= 5)
      {
            printf("5: %d\n", rem/5);
            rem %= 5;
      }      
      else
            printf("5: 0\n");
      
      if(rem >= 2)
      {
            printf("2: %d\n", rem/2);
            rem %= 2;
      }      
      else
            printf("2: 0\n");
      
      if(rem >= 1)
      {
            printf("1: %d\n", rem/1);
            rem %= 1;
      }      
      else
            printf("1: 0\n");

}
else
      printf("Invalid amount.");
      
}

