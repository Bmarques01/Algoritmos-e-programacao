#include <stdio.h>

int main()
{
    float grauA, grauB, grauC, mediaFinal;
    char grau;

    printf("Qual é sua nota do grau A?\n");
    scanf("%f",&grauA);

    printf("Qual é a sua nota do grau B?\n");
    scanf("%f",&grauB);

    mediaFinal = (grauA * 1.0/3.0) + (grauB * 2.0/3.0);

    if(mediaFinal >= 6)
    {
        printf("A média final é: %.2f. Você está aprovado",mediaFinal);
    }

    else
    {
        printf("A média final é: %.2f. Você não está aprovado. Você deseja recuperar o Grau A ou B?",mediaFinal);
        scanf(" %c",&grau);

        while(grau != 'a' && grau != 'b')
        {
            printf("Resposta inválida. Você deseja recuperar o Grau A ou B?");
            scanf(" %c",&grau);
        }

        printf("Qual é a sua nova nota do grau C?\n");
        scanf("%f", &grauC);

        if(grau == 'a')
        {
            mediaFinal = (grauC * 1.0/3.0) + (grauB * 2.0/3.0);
        }

        else if(grau == 'b')
        {
            mediaFinal = (grauA * 1.0/3.0) + (grauC * 2.0/3.0);
        }

        if(mediaFinal >= 6)
        {
        printf("A nova média final é: %.2f. Você está aprovado.\n",mediaFinal);
        }
        else
        {
            printf("A nova média final é: %.2f. Você não está aprovado.\n", mediaFinal);
        }

    }
    return 0;
}