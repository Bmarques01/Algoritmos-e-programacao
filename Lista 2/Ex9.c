#include <stdio.h>

int main()
{
    float valorCompra, valorComDesconto;

    printf("Qual é o valor da compra?");
    scanf("%f",&valorCompra);

    valorComDesconto = valorCompra * 0.85;

    printf("O valor com desconto é %.2f",valorComDesconto);

    return 0;
}