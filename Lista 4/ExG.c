#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int i;
    int numero;
    int cont_positivos = 0;
    int cont_negativos = 0; 

    
    srand(time(0));

    
    printf("Números sorteados:\n");
    for (i = 0; i < 20; i++) {
        numero = rand() % 21 - 10;

        
        if (numero > 0) {
            printf("%d - POSITIVO\n", numero);
            cont_positivos++; 
        } else if (numero < 0) {
            printf("%d - NEGATIVO\n", numero);
            cont_negativos++;
        } else {
            printf("%d - NULO\n", numero);
        }
    }

    
    printf("\nQuantidade de números positivos: %d\n", cont_positivos);
    printf("Quantidade de números negativos: %d\n", cont_negativos);

    return 0;
}