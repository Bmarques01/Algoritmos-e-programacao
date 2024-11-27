#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int consumo[30];
    int i;
    int totalConsumo = 0;
    int maiorConsumo = 0, menorConsumo = 501;
    int diaMaiorConsumo, diaMenorConsumo;
    double mediaConsumo;

    srand(time(NULL));

    for (i = 0; i < 30; i++) {
        consumo[i] = (rand() % 401) + 100;
        totalConsumo += consumo[i];
        if (consumo[i] > maiorConsumo) {
            maiorConsumo = consumo[i];
            diaMaiorConsumo = i + 1;
        }
        if (consumo[i] < menorConsumo) {
            menorConsumo = consumo[i];
            diaMenorConsumo = i + 1;
        }
    }

    mediaConsumo = totalConsumo / 30.0;

    printf("\nTotal de consumo de água no mês: %d litros\n", totalConsumo);
    printf("Média de consumo diário: %.2f litros\n", mediaConsumo);
    printf("Dia com maior consumo: Dia %d (%d litros)\n", diaMaiorConsumo, maiorConsumo);
    printf("Dia com menor consumo: Dia %d (%d litros)\n", diaMenorConsumo, menorConsumo);

    return 0;
}
