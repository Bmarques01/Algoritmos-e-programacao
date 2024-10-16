#include <stdio.h>
#include <string.h>

int main() {
    char nomes[5][100];
    char primeiro[100];

    for (int i = 0; i < 5; i++) {
        printf("Informe o nome %d: ", i + 1);
        scanf("%s", nomes[i]);
    }

    strcpy(primeiro, nomes[0]);

    for (int i = 1; i < 5; i++) {
        if (strcmp(nomes[i], primeiro) < 0) {
            strcpy(primeiro, nomes[i]);
        }
    }

    printf("O primeiro nome em ordem alfabética é: %s\n", primeiro);

    return 0;
}
