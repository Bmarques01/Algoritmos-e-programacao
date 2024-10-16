#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{
    int cont = 0;
    int n;
    int soma = 0; 
    float media; 
    int max = 5;
 
    while (cont < max)
    {
        printf("Digite um número: ");
        scanf("%d",&n);
 
        soma = soma + n;
 
        cont++;
    }
   
    printf("A soma é %d\n",soma);
 
    
    media = soma / (float) max; //transformar a variável em float
    printf("A média é %f\n",media);
 
    return 0;
}