#include <stdio.h>

int main() {
    int n, i;
    int numero;
    int soma = 0;

    
    printf("Digite a quantidade de números que deseja ler: ");
    scanf("%d", &n);

    
    printf("Digite %d números:\n", n);
    for (i = 0; i < n; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numero);
        soma += numero;
    }

    
    printf("Soma dos números lidos: %d\n", soma);

    return 0;
}
