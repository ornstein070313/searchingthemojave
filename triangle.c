#include <stdio.h>
#include<math.h>

int main(){

float side_tri, rad_cir, dist;

printf("Please enter the radius of the circle.\n");
scanf("%f", &rad_cir);

printf("\nPlease enter the length of side of the triangle.\n");
scanf("%f", &side_tri);

dist = side_tri / sqrt(3);  //The distance of the centre of the circle to the vertex of the triangle.

if(dist <= rad_cir && dist>0)
    printf("The equilateral triangle can be inscrible in the circle.");

else if(dist >= rad_cir && dist>0 && rad_cir > 0)
    printf("The equilateral triangle cannot be inscrible in the circle.");

else if(dist <= 0 || rad_cir <= 0 || side_tri <= 0)
    printf("Please enter a valid value.");

}