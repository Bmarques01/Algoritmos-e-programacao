#include <stdio.h>

int main() {
    int x;
    float notaA, notaB, notaC;
    float media, mediaGeral = 0;
    int alunosAprovados = 0;

    printf("Entre com o número de alunos: ");
    scanf("%d", &x);

    for (int i = 0; i < x; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nota A: ");
        scanf("%f", &notaA);
        printf("Nota B: ");
        scanf("%f", &notaB);

        media = (notaA * 1/3.0) + (notaB * 2/3.0);
        printf("Média: %.2f\n", media);

        if (media >= 6.0) {
            printf("APROVADO\n");
            mediaGeral += media;
            alunosAprovados++;
        } else {
            printf("REPROVADO\n");
            printf("Nota C: ");
            scanf("%f", &notaC);
            char grauSubstituto;

            printf("Qual grau deve ser substituído (A ou B)? ");
            scanf(" %c", &grauSubstituto);

            if (grauSubstituto == 'A' || grauSubstituto == 'a') {
                media = (notaC * 1/3.0) + (notaB * 2/3.0);
            } else if (grauSubstituto == 'B' || grauSubstituto == 'b') {
                media = (notaA * 1/3.0) + (notaC * 2/3.0);
            } else {
                printf("Grau inválido! A média não será recalculada.\n");
                continue;
            }

            printf("Nova média: %.2f\n", media);
            if (media >= 6.0) {
                printf("APROVADO\n");
                mediaGeral += media;
                alunosAprovados++;
            } else {
                printf("REPROVADO\n");
            }
        }
    }

    if (alunosAprovados > 0) {
        printf("\nMédia geral dos alunos aprovados: %.2f\n", mediaGeral / alunosAprovados);
    } else {
        printf("\nNenhum aluno foi aprovado.\n");
    }

    return 0;
}

