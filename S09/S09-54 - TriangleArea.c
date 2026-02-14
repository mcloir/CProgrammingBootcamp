#include <stdio.h>
#include <stdbit.h>

int main ()
{
    double height, width, area;

    printf("Hello my friend, let's calculate a triangle area, so, please inform respectively the rectangle's dimension:\n");

    printf("Height (meters): ");
    scanf("%lf", &height);

    printf("Width (meters): ");
    scanf("%lf", &width);

    area = height * width;

    printf("The area of the triangle is %lf m x %lf m = %lf m²\n", height, width, area);
    

    return 0;
}