#include <stdio.h>

int main() {
    int numero;
    char continuar;

    do {
        printf("Entre com um número: ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Fatorial não definido para números negativos.\n");
        } else {
            long long fatorial = 1;
            for (int i = 1; i <= numero; i++) {
                fatorial *= i;
            }
            printf("O fatorial de %d é %lld\n", numero, fatorial);
        }

        printf("Calcular outro número (s/n)? ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    return 0;
}
