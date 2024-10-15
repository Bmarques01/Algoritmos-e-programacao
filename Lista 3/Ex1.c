#include <stdio.h>
int main()
{
    float n1,n2;
    float divisao;
    
    printf("Digite um numero: ");
    scanf("%f",&n1);
    printf("Digite outro numero: ");
    scanf("%f",&n2);

    divisao = n1 / n2;
    
    if(divisao != 0){
        printf("A divisao de %.2f e %.2f e %.2f\n",n1,n2,divisao);
    }
    else{
        printf("Erro: Divisao por zero nao permitida.\n");
    }
    
    return 0;
}