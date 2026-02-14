#include <stdio.h>
#include <stdbit.h>

int main ()
{
    double height, width, perimeter;

    printf("Height: ");
    scanf("%lf", &height);
    printf("Width: ");
    scanf("%lf", &width);

    perimeter = 2 * (height + width);

    printf("The perimeter is 2 x (%lf m + %lf m) = %lf m", height, width, perimeter);


    return 0;
}