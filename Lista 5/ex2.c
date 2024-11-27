#include <stdio.h>

int main(){

    int vetor[5];

    printf("Digite 5 numeros:\n");
    for(int i = 0; i < 5; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d",& vetor[i]);
    }

    printf("\nResultado de cada valor multiplicado pela sua posição: \n");
    for(int i = 0; i < 5; i++){
        printf("%d\n", vetor[i] * i);
    }

    return 0;
}