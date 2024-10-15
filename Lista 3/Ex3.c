#include <stdio.h>
int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    if (numero > 0)
    {
        int dobro = numero * 2;
        
        printf("O numero e positivo.\n");
        printf("O dobro do numero e %d.\n",dobro);
    }
    else {
        int triplo = numero * 3;

        printf("O numero e negativo.\n");
        printf("O triplo do numero e %d.\n",triplo);
    }
    return 0;
}