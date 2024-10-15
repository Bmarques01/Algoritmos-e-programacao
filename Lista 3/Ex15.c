#include <stdio.h>

int main() {
    float precoNormal, precoFinal;
    int condicaoPagamento;

    printf("Informe o preço normal do produto: R$ ");
    scanf("%f", &precoNormal);

    printf("Escolha a condição de pagamento:\n");
    printf("1 - À vista em dinheiro (15%% de desconto)\n");
    printf("2 - À vista no cartão de crédito (10%% de desconto)\n");
    printf("3 - Em duas vezes (sem juros)\n");
    printf("4 - Em três vezes (com 10%% de juros)\n");
    printf("Digite o código da condição de pagamento: ");
    scanf("%d", &condicaoPagamento);

    switch (condicaoPagamento) {
        case 1:
            precoFinal = precoNormal * (1 - 0.15);
            printf("Preço a ser pago: R$ %.2f (à vista em dinheiro)\n", precoFinal);
            break;
        case 2:

            precoFinal = precoNormal * (1 - 0.10);
            printf("Preço a ser pago: R$ %.2f (à vista no cartão de crédito)\n", precoFinal);
            break;
        case 3:

            precoFinal = precoNormal; 
            printf("Preço a ser pago: R$ %.2f (em duas vezes)\n", precoFinal);
            break;
        case 4:

            precoFinal = precoNormal * (1 + 0.10);
            printf("Preço a ser pago: R$ %.2f (em três vezes)\n", precoFinal);
            break;
        default:
  
            printf("Condição de pagamento inválida!\n");
            break;
    }

    return 0;
}
