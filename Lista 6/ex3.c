#include <stdio.h>

void gerarMatrizIdentidade(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = (i == j) ? 1 : 0;
        }
    }
}

void imprimirMatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[4][4];
    gerarMatrizIdentidade(matriz);
    imprimirMatriz(matriz);
    return 0;
}
