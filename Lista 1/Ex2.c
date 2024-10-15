#include <stdio.h>

int main()
{
    char nome[50];

    printf("Digite o seu nome: \n");
    scanf("%s",&nome);

    printf("Seja bem-vindo(a), %s!",nome);
    return 0;
}