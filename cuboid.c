#include <stdio.h>
#include <math.h>

#define PI 3.1416

int main()
{

    int len_cub, bre_cub, hei_cub, hei_cyl, rad_cyl;
    char shape;

    printf("If desired shape is Cuboid, press A.\nOtherwise if shape is Cylinder, press B.\nIf both, then press C.\n");
    scanf("%c", &shape);

    if(shape == 'A')
    {
        printf("Enter the length, breadth and height of the cuboid.\n");
        scanf("%d %d %d", &len_cub, &bre_cub, &hei_cub);

        if(len_cub <= 0 || bre_cub <=0 || hei_cub <= 0)
            printf("Invalid value");
        
        else
        {
            printf("The surface area is %d\n", 2*(len_cub*bre_cub + bre_cub*hei_cub + len_cub*hei_cub));
            printf("The volume is %d\n", (len_cub*bre_cub*hei_cub));
        }

    }

    else if(shape == 'B')
    {
        printf("Enter the radius and height of the cylinder.\n");
        scanf("%d %d", &rad_cyl, &hei_cyl);
        
        if(rad_cyl <= 0 || hei_cyl <=0)
            printf("Invalid value");
        
        else
        {
            printf("The surface area is %.2f\n", 2*(PI*rad_cyl*hei_cyl + PI*pow(rad_cyl, 2)));
            printf("The volume is %.2f\n", (PI*pow(rad_cyl, 2)*hei_cyl));
        }

    }

    else if(shape == 'C')
    {
        printf("Enter the length, breadth and height of the cuboid.\n");
        scanf("%d %d %d", &len_cub, &bre_cub, &hei_cub);

        if(len_cub <= 0 || bre_cub <=0 || hei_cub <= 0)
            printf("Invalid value");
        
        else
        {
            printf("The surface area is %d\n", 2*(len_cub*bre_cub + bre_cub*hei_cub + len_cub*hei_cub));
            printf("The volume is %d\n", (len_cub*bre_cub*hei_cub));
        }
        
        printf("Enter the radius and height of the cylinder.\n");
        scanf("%d %d", &rad_cyl, &hei_cyl);
        
        if(rad_cyl <= 0 || hei_cyl <=0)
            printf("Invalid value");
        
        else
        {
            printf("The surface area is %.2f\n", 2*(PI*rad_cyl*hei_cyl + PI*pow(rad_cyl, 2)));
            printf("The volume is %.2f\n", (PI*pow(rad_cyl, 2)*hei_cyl));
        }

    }

    else
    {    
        printf("Invalid input.");
    }

}