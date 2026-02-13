#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num; //Variable num declared as a integer.
    num = 20;
    printf("num is %d\n", num);

    printf("Please, reinsert the value for num: ");
    scanf("%d", &num);
    printf("Now, the new value for num is %d", num);

    return 0;
}