#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() {
    srand(time(0)); 

    int respostaUser, populacao, taxaCrescimento, ciclos, novaPopulacao;

    printf("1 - Nova Simulação \n2 - Sair do Programa\n");
    scanf("%d", &respostaUser);

    while (respostaUser == 1) {
        printf("População inicial: ");
        scanf("%d", &populacao);

        printf("Taxa de crescimento: ");
        scanf("%d", &taxaCrescimento);

        printf("Número de ciclos: ");
        scanf("%d", &ciclos);

        novaPopulacao = populacao;

        for (int cont = 1; cont <= ciclos; cont++) {
            novaPopulacao = novaPopulacao + (novaPopulacao * taxaCrescimento / 100);

            int condicaoOcorrencia = rand() % 100;

            if (condicaoOcorrencia < 5) {
                printf("Condição adversa: Radiação Ultravioleta!\n");
                novaPopulacao -= (novaPopulacao * 50) / 100;
            } else if (condicaoOcorrencia < 15) {
                printf("Condição adversa: Excesso de Umidade!\n");
                novaPopulacao -= (novaPopulacao * 20) / 100;
            } else if (condicaoOcorrencia < 30) {
                printf("Condição adversa: Falta de Nutrientes!\n");
                novaPopulacao -= (novaPopulacao * 25) / 100;
            } else if (condicaoOcorrencia < 50) {
                printf("Condição adversa: Alta Temperatura!\n");
                novaPopulacao -= (novaPopulacao * 30) / 100;
            } else if (condicaoOcorrencia < 60) {
                printf("Condição favorável!\n");
                novaPopulacao += (novaPopulacao * 20) / 100;
            } else {
                printf("Nenhuma condição adversa ou favorável.\n");
            }

            if (novaPopulacao <= 0) {
                printf("A população morreu no ciclo %d!\n", cont);
                break;
            }

            printf("Ciclo %d: População = %d\n", cont, novaPopulacao);
        }

        printf("Simulação concluída. População final: %d\n", novaPopulacao);

        printf("1 - Nova Simulação \n2 - Sair do Programa\n");
        scanf("%d", &respostaUser);
    }

    return 0;
}
