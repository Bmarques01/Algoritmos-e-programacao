#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[10], vPares[10], vImpares[10];
    int i, soma = 0, produto = 1, maior, menor, ocorrencias = 0;
    double media;
    int vParesCount = 0, vImparesCount = 0;

    
    srand(time(NULL));

    
    for (i = 0; i < 10; i++) {
        vetor[i] = (rand() % 81) + 10; // [10, 90]
    }

    
    printf("Vetor original:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    
    int encontrou50 = 0;
    for (i = 0; i < 10; i++) {
        if (vetor[i] == 50) {
            encontrou50 = 1;
            ocorrencias++;
        }
    }
    printf("O valor 50 %s encontrado.\n", encontrou50 ? "foi" : "nao foi");

    
    printf("O valor 50 aparece %d vezes no vetor.\n", ocorrencias);

    
    for (i = 0; i < 10; i++) {
        soma += vetor[i];
    }
    media = (double)soma / 10;
    printf("Media dos valores: %.2f\n", media);

    
    maior = menor = vetor[0];
    for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) maior = vetor[i];
        if (vetor[i] < menor) menor = vetor[i];
    }
    printf("Maior valor: %d, Menor valor: %d\n", maior, menor);

    
    for (i = 0; i < 10; i++) {
        produto *= vetor[i];
    }
    printf("Soma dos valores: %d\n", soma);
    printf("Produto acumulado dos valores: %d\n", produto);

    
    printf("Vetor em ordem inversa:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    
    int vetorInverso[10];
    for (i = 0; i < 10; i++) {
        vetorInverso[i] = vetor[9 - i];
    }
    printf("Vetor copiado em ordem inversa:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetorInverso[i]);
    }
    printf("\n");

    
    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            vPares[vParesCount++] = vetor[i];
        } else {
            vImpares[vImparesCount++] = vetor[i];
        }
    }
    printf("Vetor de pares:\n");
    for (i = 0; i < vParesCount; i++) {
        printf("%d ", vPares[i]);
    }
    printf("\n");
    printf("Vetor de impares:\n");
    for (i = 0; i < vImparesCount; i++) {
        printf("%d ", vImpares[i]);
    }
    printf("\n");

    return 0;
}
