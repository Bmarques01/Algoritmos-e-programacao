#include <stdio.h>

int main() {
    int v1[5] = {1, 5, 9, 2, 5};
    int v2[5] = {7, 4, 13, 21, 6};
    int v3[5] = {8, -3, 5, 7, 12};
    int matriz[3][5];
    int i, j;

    
    for (i = 0; i < 5; i++) {
        matriz[0][i] = v1[i];
        matriz[1][i] = v2[i];
        matriz[2][i] = v3[i];
    }

    
    printf("Matriz 3x5:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
