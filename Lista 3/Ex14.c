#include <stdio.h>

int main() {
    int idadeConveniado, idadeDependente;
    char temDependentes;
    float valorTotal = 300.0;
    float valorDependente;

    printf("Informe a idade do conveniado: ");
    scanf("%d", &idadeConveniado);

    printf("O conveniado tem dependentes? (s/n): ");
    scanf(" %c", &temDependentes);

    if (temDependentes == 's' || temDependentes == 'S') {
        int numDependentes;
        printf("Quantos dependentes? ");
        scanf("%d", &numDependentes);

        for (int i = 0; i < numDependentes; i++) {
            printf("Informe a idade do dependente %d: ", i + 1);
            scanf("%d", &idadeDependente);

            if (idadeDependente < 10) {
                valorDependente = 100.0;
            } else if (idadeDependente >= 10 && idadeDependente <= 30) {
                valorDependente = 220.0;
            } else if (idadeDependente >= 31 && idadeDependente <= 60) {
                valorDependente = 395.0;
            } else {
                valorDependente = 480.0;
            }

            valorTotal += valorDependente;
        }
    }

    printf("O valor total a ser pago pelo plano de saúde é: R$ %.2f\n", valorTotal);

    return 0;
}