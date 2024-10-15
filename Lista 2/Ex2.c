#include<stdio.h>

int main()
{
    float dolares,reais;

    printf("Quantos dolares voce deseja comprar?");
    scanf("%f",&dolares);
    reais = dolares/5;
    printf("%2.f corresponde a %2.f reais\n",dolares,reais);

    return 0;
}