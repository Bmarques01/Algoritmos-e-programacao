#include <stdio.h>

int main()
{
    int idade;

    printf("Qual é a idade do nadador?\n");
    scanf("%d",&idade);

    if (idade <= 5 && idade <= 7)
    {
        printf("O nadador está na categoria Infantil A\n");
    }
    else if(idade >= 8 && idade <= 10)
    {
        printf("O nadador está na categoria Infantil B\n");
    }
    else if(idade >= 11 && idade <= 13)
    {
        printf("O nadador está na categoria Juvenil A\n");
    }
    else if(idade >= 14 && idade <= 17)
     {
        printf("O nadador está na categoria Juvenil B\n");
    }
    else if(idade >= 18)
    {
        printf("O nadador está na categoria Senior\n");
    }

    return 0;
}