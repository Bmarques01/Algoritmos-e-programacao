#include <stdio.h>

int main()
{
    char respostaDoUsuario;
    char alternativaCorreta = 'a';

    printf("Qual é o verdadeiro nome do super-herói Batman?\n a) Bruce Wayne \n b) Clark Kent \n c) Peter Parker \n d) Tony Stark \n e) Steve Rogers\n");
    scanf("%c",&respostaDoUsuario);

    printf("Você respondeu alternativa %c. A resposta correta é a alternativa %c.",respostaDoUsuario,alternativaCorreta);

    return 0;
}