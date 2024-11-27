#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][6];
    int i, j, somaSegundaLinha = 0, somaQuintaColuna = 0, somaMultPrimeiraQuarta = 0;
    int somaColunasPares = 0, somaLinhasImpares = 0;

    srand(time(NULL));

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            matriz[i][j] = (rand() % 21) - 10;
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            if (i == 1) {
                somaSegundaLinha += matriz[i][j];
            }
            if (j == 4) {
                somaQuintaColuna += matriz[i][j];
            }
            if (j % 2 == 0) {
                somaColunasPares += matriz[i][j];
            }
            if (i % 2 == 1) {
                somaLinhasImpares += matriz[i][j];
            }
            if (i == 0) {
                somaMultPrimeiraQuarta += matriz[i][j] * matriz[3][j];
            }
        }
    }

    printf("Matriz 4x6:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma dos elementos da segunda linha: %d\n", somaSegundaLinha);
    printf("Soma dos elementos da quinta coluna: %d\n", somaQuintaColuna);
    printf("Soma da multiplicação da primeira linha pela quarta linha: %d\n", somaMultPrimeiraQuarta);
    printf("Soma dos elementos das colunas com índices pares: %d\n", somaColunasPares);
    printf("Soma dos elementos das linhas com índices ímpares: %d\n", somaLinhasImpares);

    return 0;
}
