#include <stdio.h>
#include <stdlib.h>

int main ()
{
    /*int num1=5, num2=2;
    int result;
    result = num1/num2;
    printf("result = %d \n", result); - resultado = 2, não 2.5*/

    /*int num1=5, num2=2;
    double result;
    result = num1/num2; //o tipo do número resultante será o mesmo dos envolvidos na operação, independetemente se outro tipo foi escolhido para o resultante.
    printf("result = %lf \n", result); - resultado = 2, ainda.*/

    /*int num1=5;
    double num2=2;
    double result;
    result = num1/num2;
    printf("result = %lf \n", result); - resultado = 2.5*/

    /*double num1=5;
    int num2=2;
    double result;
    result = num1/num2;
    printf("result = %lf \n", result); // resultado = 2.5, do mesmo jeito.*/

    int num1=5, num2=2;
    double result;
    result = num1/(double)num2; //com o (double) num2 sofre um casting agir como double. Poderia ser com num1 também.
    printf("result = %lf \n", result);

    //eu posso aplicar um casting para transformar um número em outro tipo, como (int)6.3 que retornará 6.

    return 0;
}