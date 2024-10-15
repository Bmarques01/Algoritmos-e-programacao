#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int main()
{
    int faces, resultado;

    srand(time(0));

    printf("Escolha a quantidade de faces do dado: 4, 6, 8, 10, 12 ou 16\n");
    scanf("%d",&faces);

   while (faces != 4 && faces != 6 && faces != 8 && faces != 10 && faces != 12 && faces != 16) {
        printf("Número de faces inválido. Escolha uma das opções de quantidade de faces do dado: 4, 6, 8, 10, 12 ou 16\n");
        scanf("%d", &faces);
    }

    resultado = rand() % faces + 1;

    printf("Você rolou um dado de %d faces e o resultado foi: %d\n", faces, resultado);

    return 0;
}