#include <stdio.h>
int main()
{
    int distance = 0, dist_x = 0, dist_y = 0, dist;

    char X;

    while(1)
    {   
        printf("Enter direction: ");
        scanf(" %c", &X);

        if(X == '0')
        break;

        printf("Enter distance: ");
        scanf(" %d", &dist);

        if(X == 'S' || X == 'W')
        {
            dist *= (-1);
            
            if(X == 'S')
                dist_y += dist;
            else
                dist_x += dist; 
        }

        else
        {
            if(X == 'N')
                dist_y += dist;
            else
                dist_x += dist;
        }
    }

    printf("(%d,%d)", dist_x, dist_y);
    
}
