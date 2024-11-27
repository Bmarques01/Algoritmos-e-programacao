#include <stdio.h>

int main(){

    int passos[7];
    int total = 0;
    double media;
    int i;

    printf("Digite o número de passos dados em cada dia da semana:\n");
    for (i = 0; i < 7; i++){
        printf("Dia %d: ",i + 1);
        scanf("%d",&passos[i]);
        total += passos[i];
    }

    printf("\nTotal de passos na semana: %d\n", total);

    media = total / 7.0;
    printf("Media diaria de passos: %.2f\n", media);

    printf("\nDias em que a meta de 10.000 passos foi atingida:\n");
    int metaAlcancada = 0;
    for (i = 0; i < 7; i++) {
        if (passos[i] >= 10000) {
            printf("- Dia %d\n", i + 1);
            metaAlcancada = 1;
        }
    }

    if (!metaAlcancada) {
        printf("Nenhum dia atingiu a meta de 10.000 passos.\n");
    }


return 0;
}