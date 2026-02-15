#include <stdio.h>
#include <stdbit.h>

int main ()
{
    double tf, tc;

    printf("Please, insert the Celsius temperature: ");
    scanf("%lf", &tc);

    tf = tc * 1.8 + 32;
    printf("The Fahrenheint temperature is %.2lf°F\n", tf);


    return 0;
}