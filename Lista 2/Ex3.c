#include <stdio.h>

int main()
{

    float valorDoQuilo = 40.0;
    float pesoDoPrato, valorASerPago;

    printf("Qual é o peso do prato em kg?");
    scanf("%f",&pesoDoPrato);

    valorASerPago = pesoDoPrato * valorDoQuilo;

    printf("O valor a ser pago é: %.2f",valorASerPago);

    return 0;
}