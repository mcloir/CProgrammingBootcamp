#include <stdio.h>
#include <stdbit.h>

int main ()
{
    double tf, tc;

    printf("Please, insert the Fahrenheit temperature: ");
    scanf("%lf", &tf);

    tc = (tf - 32)/1.8;
    printf("The Celsius temperature is %.2lf°C\n", tc);


    return 0;
}