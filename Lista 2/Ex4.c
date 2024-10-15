#include <stdio.h>

int main ()
{

    float notaGrauA, notaGrauB, mediaFinal;

    printf("Qual é a sua nota do grau A? ");
    scanf("%f",& notaGrauA);

    printf("Qual é a sua nota do grau B? ");
    scanf("%f",& notaGrauB);

    mediaFinal = (notaGrauA * 1/3.0) + (notaGrauB * 2/3.0);

    printf("A media final e: %.2f",mediaFinal);

    return 0;
}