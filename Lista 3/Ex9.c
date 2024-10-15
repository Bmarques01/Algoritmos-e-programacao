#include <stdio.h>

int main()
{
    float real;
    float dolar;
    float euro;
    char alternativa;

    printf("Quantos reais e o dolar?");
    scanf("%f",&dolar);

    printf("Quantos reais e o euro?");
    scanf("%f",&euro);

    printf("Digite o valor em reais:\n");
    scanf("%f", &real);

    printf("Digite uma alternativa:\n1) Converter de Real para Euro\n2) Converter de Real para Dolar \n3) Converter de Euro para Dolar \n4) Converter de Euro para Real \n5) Converter de Dolar para Euro \n6) Converter de Dolar para Real \n");
    scanf(" %c",&alternativa);

    if (alternativa == '1'){
        int alt1;
        float resultado = real / euro;
        
        printf("O valor e %.2f",resultado);
    }
    else if (alternativa == '2'){
        int alt2;
        float resultado = real / dolar;

        printf("O valor e %.2f",resultado);
    }
    else if (alternativa == '3'){
        int alt3;
        float resultado = euro / dolar;
        
        printf("O valor e %.2f",resultado);
    }
    else if (alternativa == '4'){
        int alt4;
        float resultado = euro * real;
        
        printf("O valor e %.2f",resultado);
    }
    else if (alternativa == '5'){
        int alt5;
        float resultado = dolar / euro;
       
        printf("O valor e %.2f",resultado);
    }
    else if (alternativa == '6'){
        int alt6;
        float resultado = dolar * real;
        
        printf("O valor e %.2f",resultado);
    }
    else {
        printf("Opcao invalida!\n");
    }
    return 0;
}