#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int main() {
    int escolhaUsuario, numeroUsuario, numeroComputador, soma;
    
    srand(time(0));

    printf("Escolha PAR (0) ou ÍMPAR (1): ");
    scanf("%d", &escolhaUsuario);

    if (escolhaUsuario != 0 && escolhaUsuario != 1) {
        printf("Escolha inválida! Escolha 0 para PAR ou 1 para ÍMPAR.\n");
        return 1;
    }

    printf("Digite um número entre 0 e 5: ");
    scanf("%d", &numeroUsuario);

    if (numeroUsuario < 0 || numeroUsuario > 5) {
        printf("Número inválido! Escolha um número entre 0 e 5.\n");
        return 1;
    }

    numeroComputador = rand() % 6; 

    soma = numeroUsuario + numeroComputador;

    printf("Você escolheu %d e o computador escolheu %d.\n", numeroUsuario, numeroComputador);
    printf("A soma é %d.\n", soma);

    if ((soma % 2 == 0 && escolhaUsuario == 0) || (soma % 2 != 0 && escolhaUsuario == 1)) {
        printf("Você venceu!\n");
    } else {
        printf("O programa venceu!\n");
    }

    return 0;
}