#include <stdio.h>

int main()
{
    printf("%d + %d = %d\n", 10, 20, 10+20);
    printf("%d - %d = %d\n", 10, 20, 10-20);
    printf("%d * %d = %d\n", 10, 20, 10*20);
    printf("%d / %d = %d\n", 10, 20, 10/20); // Here, we have only the integer part of the quocient, which is 0.
    printf("%d %% %d = %d\n", 10, 3, 10%3);  // The % operator is used to calculate the remainder, i,e, the rest of the divission. We have to write %% to print the % symbol in the output.



    return 0;
}