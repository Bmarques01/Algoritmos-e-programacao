#include <stdio.h>
int main()
{
    float valor1;
    float valor2;
    float lucro;

    printf("Qual e o valor da compra?");
    scanf("%f",&valor1);

    if (valor1 < 20.0 ){
        lucro = valor1 * 0.45;
        valor2 = valor1 + lucro;

        printf("O valor e %.2f\n",valor2);
    }
    else if (valor1 <= 50.0){
        lucro = valor1 * 0.35;
        valor2 = valor1 + lucro;

        printf("O valor e %.2f\n",valor2);
    }
    else if (valor1 > 50.0){
        lucro = valor1 * 0.25;
        valor2 = valor1 + lucro;

        printf("O valor e %.2f\n",valor2);
    }


    return 0;
} 
