#include <stdio.h>

void hexadecimal(int number)
{
    int index = 0, rem;
    int hexa[10]; 
    char hexab[10];

    while(number > 0)
    {
        rem = number % 16;
        hexa[index] = rem;
        number /= 16;
            
        index++;
    }

    for(int i = 0; i < 10; i++)
    {
        switch(hexa[i])
        {
            case 0:
            hexab[i] = '0';
            break;
            
            case 1:
            hexab[i] = '1';
            break;
            
            case 2:
            hexab[i] = '2';
            break;
            
            case 3:
            hexab[i] = '3';
            break;

            case 4:
            hexab[i] = '4';
            break;

            case 5:
            hexab[i] = '5';
            break;

            case 6:
            hexab[i] = '6';
            break;

            case 7:
            hexab[i] = '7';
            break;

            case 8:
            hexab[i] = '8';
            break;

            case 9:
            hexab[i] = '9';
            break;

            case 10:
            hexab[i] = 'A';
            break;
            
            case 11:
            hexab[i] = 'B';
            break;

            case 12:
            hexab[i] = 'C';
            break;

            case 13:
            hexab[i] = 'D';
            break;

            case 14:
            hexab[i] = 'E';
            break;

            case 15:
            hexab[i] = 'F';
            break;

            default:
            break;
        }
    }

    for(int j = index-1; j >= 0; j--)
    {
        printf("%c", hexab[j]);
    }
}


int main()
{
    int number;
    
    printf("Enter your number: ");
    scanf("%d", &number);

    hexadecimal(number);

}