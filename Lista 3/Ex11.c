#include <stdio.h>

int main()
{
    int valor, quantidade;

    printf("Informe um valor em reais: R$ ");
    scanf("%d", &valor);

    quantidade = valor / 100;

    if (quantidade > 0) {
        printf("%d nota(s) de R$ 100\n", quantidade);
    }
    valor = valor % 100; 

    quantidade = valor / 50;
    if (quantidade > 0) {
        printf("%d nota(s) de R$ 50\n", quantidade);
    }
    valor = valor % 50;

    quantidade = valor / 20;
    if (quantidade > 0) {
        printf("%d nota(s) de R$ 20\n", quantidade);
    }
    valor = valor % 20;

    quantidade = valor / 10;
    if (quantidade > 0) {
        printf("%d nota(s) de R$ 10\n", quantidade);
    }
    valor = valor % 10;

    quantidade = valor / 5;
    if (quantidade > 0) {
        printf("%d nota(s) de R$ 5\n", quantidade);
    }
    valor = valor % 5;

    quantidade = valor / 1;
    if (quantidade > 0) {
        printf("%d nota(s) de R$ 1\n", quantidade);
    }

    return 0;
}