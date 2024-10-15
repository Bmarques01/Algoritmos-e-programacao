#include <stdio.h>

int main() {
    
    float precoCamiseta = 25.00;
    float precoCalca = 100.00;
    float precoCinto = 40.00;

    int camisetas, calcas, cintos;
    float valorTotal, valorDesconto, valorFinal;

    
    printf("Digite a quantidade de camisetas: ");
    scanf("%d", &camisetas);

    printf("Digite a quantidade de calças: ");
    scanf("%d", &calcas);

    printf("Digite a quantidade de cintos: ");
    scanf("%d", &cintos);

    
    valorTotal = (camisetas * precoCamiseta) + (calcas * precoCalca) + (cintos * precoCinto);

    
    valorDesconto = valorTotal * 0.10;

    
    valorFinal = valorTotal - valorDesconto;

   
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final da compra: R$ %.2f\n", valorFinal);

    return 0;
}
