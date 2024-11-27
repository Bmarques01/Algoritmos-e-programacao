#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    
    int N, i, face;
    int resultados [6] = {0};
    double percentuais[6];

    srand(time(NULL));

    printf("Quantas vezes o dado deve ser lançado:");
    scanf("%d",& N);

    for(i = 0; i < N; i++){
        face = (rand() % 6) + 1;
        resultados [face - 1]++;
    }

    for (i = 0; i < 6; i++) {
        percentuais[i] = (resultados[i] / (double)N) * 100.0;
    }

    for (i = 0; i < 6; i++){
          printf("Face %d: %d vezes (%.2f%%)\n", i + 1, resultados[i], percentuais[i]);
    }
    
    return 0;
}