#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][6];
    int i, j;
    int maior, menor;

    srand(time(NULL));

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            matriz[i][j] = (rand() % 21) - 10;
        }
    }

    maior = menor = matriz[0][0];

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
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

    printf("\nMaior valor da matriz: %d\n", maior);
    printf("Menor valor da matriz: %d\n", menor);

    return 0;
}
