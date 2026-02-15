#include <stdio.h>

#include <stdbit.h>

int main ()

{

    int var1 = 10, var2 = 30, temp;

    printf("The variables are %d and %d\n", var1, var2);

    temp = var1;

    var1 = var2;

    var2 = temp;

    printf("After the swap move, the variables' values now are %d and %d.\n", var1, var2);

     return 0;

}