#include <stdio.h>

int main ()
{
    int num;

    printf("Digite um numero: \n");
    scanf("%d",&num);

    if (num % 3 == 0)
    {
        printf("O numero %d e divisivel por 3",num);
    }
    else{
        printf("O numero %d nao e divisivel por 3",num);
    }
    return 0;
}