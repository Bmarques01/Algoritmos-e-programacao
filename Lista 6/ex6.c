#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float matriz[10][3];
    int i;

    srand(time(NULL));

    
    for (i = 0; i < 10; i++) {
        matriz[i][0] = (rand() % 101) / 10.0; 
        matriz[i][1] = (rand() % 101) / 10.0; 
        matriz[i][2] = (matriz[i][0] * (1.0 / 3.0)) + (matriz[i][1] * (2.0 / 3.0)); 
    }

    
    printf("Grau A   Grau B   Grau Parcial\n");
    for (i = 0; i < 10; i++) {
        printf("%6.1f   %6.1f   %6.1f\n", matriz[i][0], matriz[i][1], matriz[i][2]);
    }

    return 0;
}
