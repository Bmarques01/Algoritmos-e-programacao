#include <stdio.h>

int main() 
{
    int i;
    int numero;
    int cont_pares = 0;
    int cont_impares = 0; 

    
    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numero);

        
        if (numero % 2 == 0) {
            cont_pares++;
        } else {
            cont_impares++;
        }
    }

    printf("Quantidade de números pares: %d\n", cont_pares);
    printf("Quantidade de números ímpares: %d\n", cont_impares);

    return 0;
}