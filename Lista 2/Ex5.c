#include <stdio.h>

int main()
{
    float precoDoLitro, valor, litros;

    printf("Qual é o valor da gasolina?");
    scanf("%f",&precoDoLitro);

    printf("Qual é o valor em reais que você deseja colocar em gasolina?");
    scanf("%f",&valor);

    litros = valor / precoDoLitro;

    printf("Você colocou %.2f litros de gasolina",litros);

    return 0;
}