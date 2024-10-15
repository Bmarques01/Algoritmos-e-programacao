#include <stdio.h>

int main()
{
    float salario;
    float desconto;

    printf("Qual e o seu salario?\n");
    scanf("%f",&salario);
    desconto = salario * 0.11;

    if (desconto > 318.20){
        printf("O desconto e 318,20\n");
    }
    else{
        printf("O desconto e %.2f\n",desconto);
    }
   

    return 0;
}