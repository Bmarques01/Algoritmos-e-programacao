#include <stdio.h>

int main() 
{
    int i;
    int numeros[15];
    int soma = 0;
    float media;

    
    printf("Digite 15 números:\n");
    for (i = 0; i < 15; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i]; 
    }

    
    media = soma / 15.0;

    
    printf("Soma: %d\n", soma);
    printf("Média: %.2f\n", media);

    return 0;
}