#include <stdio.h>
int main()
{
int num=1851, div, a500, a100, a50, a20, a10, a5, a2, a1;
int rem = num;

printf("Enter number of notes:\n");
scanf("%d %d %d %d %d %d %d %d", &a500, &a100, &a50, a20, a10, a5, a2, a1);


if(rem >= 1)
{

      if(a500>=1)
      {
            div = rem/(500);
            
            if(a500 > div)
            { 
            printf("500: %d\n", div);
            rem %= div*500; 
            }
            
            else if(a500 <= div)
            { 
            printf("500: %d\n", a500);
            rem -= 500*a500; 
            }
            
            else
            printf("500: 0\n");
      }
      else
            printf("500: 0\n");

         

      if(a100>=1)
      {
            div = rem/(100);
            
            if(a100 > div)
            { 
            printf("100: %d\n",div);
            rem %= div*100; 
            }
            
            else if(a100 <= div)
            { 
            printf("100: %d\n", a100);
            rem -= 100*a100; 
            }
            
            else
            printf("100: 0\n");
      }
      else
            printf("100: 0\n");

       

      if(a50>=1)
      {
            div = rem/(50);
            
            if(a50 > div)
            { 
            printf("50: %d\n",div);
            rem %= div*50; 
            }
            
            else if(a50 <= div)
            { 
            printf("50: %d\n", a50);
            rem -= 50*a50; 
            }
            
            else
            printf("50: 0\n");
      }
      else
            printf("50: 0\n");
            
       

      if(a20>=1)
      {
            div = rem/(20);
            
            if(a20 > div)
            { 
            printf("20: %d\n",div);
            rem %= div*20; 
            }
            
            else if(a20 <= div)
            { 
            printf("20: %d\n", a20);
            rem -= 20*a20; 
            }
            
            else
            printf("20: 0\n");
      }
      else
            printf("20: 0\n");
                        
       

      if(a10>=1)
      {
            div = rem/(10);
            
            if(a10 > div)
            { 
            printf("10: %d\n",div);
            rem %= div*10; 
            }
            
            else if(a10 <= div)
            { 
            printf("10: %d\n", a10);
            rem -= 10*a10; 
            }
            
            else
            printf("10: 0\n");
      }
      else
            printf("10: 0\n");
                        
       

      if(a5>=1)
      {
            div = rem/(5);
            
            if(a5 > div)
            { 
            printf("5: %d\n",div);
            rem %= div*5; 
            }
            
            else if(a5 <= div)
            { 
            printf("5: %d\n", a5);
            rem -= 5*a5; 
            }
            
            else
            printf("5: 0\n");
      }
      else
            printf("5: 0\n");
                        
       

      if(a2>=1)
      {
            div = rem/(2);
            
            if(a2 > div)
            { 
            printf("2: %d\n",div);
            rem %= div*2; 
            }
            
            else if(a2 <= div)
            { 
            printf("2: %d\n", a2);
            rem -= 2*a2; 
            }
            
            else
            printf("2: 0\n");
      }
      else
            printf("2: 0\n");
                        
       

      if(a1>=1)
      {
            div = rem/(1);
            
            if(a1 > div)
            { 
            printf("1: %d\n",div);
            rem %= div*1; 
            }
            
            else if(a1 <= div)
            { 
            printf("1: %d\n", a1);
            rem -= 1*a1; 
            }
            
            else
            printf("1: 0\n");
      }
      else
            printf("1: 0\n");


      if(rem == 0)
            printf("This combination of notes can be used.");
      else
            printf("Sorry there is no usable combination of notes.");
}
}