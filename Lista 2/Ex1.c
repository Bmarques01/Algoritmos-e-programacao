#include<stdio.h>

int main() 
{
    int minutos,segundos;
    printf("Digite um valor de minutos: ");
    scanf("%d",&minutos);
    segundos = minutos * 60;
    printf("%d minutos corresponde a %d segundos",minutos,segundos);

    return 0;
}