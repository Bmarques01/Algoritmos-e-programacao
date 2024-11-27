#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int pontos[4] = {0}; 
    int i, j, pontosRodada, vencedor, empate = 0;
    int maiorPontuacao = 0;

    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        printf("\nRodada %d\n", i + 1);

        for (j = 0; j < 4; j++) {
            pontosRodada = rand() % 101;
            pontos[j] += pontosRodada;
            printf("Jogador %d fez %d pontos\n", j + 1, pontosRodada);

            if (pontosRodada > 80) {
                printf("Rodada de Destaque para o Jogador %d\n", j + 1);
            }
        }
    }

    printf("\nPontuação final dos jogadores:\n");
    for (i = 0; i < 4; i++) {
        printf("Jogador %d: %d pontos\n", i + 1, pontos[i]);
        if (pontos[i] > maiorPontuacao) {
            maiorPontuacao = pontos[i];
            vencedor = i + 1;
            empate = 0;
        } else if (pontos[i] == maiorPontuacao) {
            empate = 1;
        }
    }

    if (empate) {
        printf("Houve empate!\n");
    } else {
        printf("O vencedor é o Jogador %d\n", vencedor);
    }

    return 0;
}
