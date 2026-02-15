#include <stdio.h>
#include <stdbit.h>

int main ()
{
    int grade1, grade2, grade3;
    float average;

    printf("Insert the integer values for grade1, grade2 e grade3\n");
    printf("Grade1 value: \n");
    scanf("%d", &grade1);
    printf("Grade2 value: \n");
    scanf("%d", &grade2);
    printf("Grade3 value: \n");
    scanf("%d", &grade3);

    //average = ((float)grade1 + grade2 + grade3)/3;
    average = (grade1 + grade2 + grade3)/3.0; // aqui o casting deu-se no denominador.

    printf("The average is %.2f\n", average); // o .2 serve para deixar duas casas decimais.

    return 0;
}