#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[30];
    int quantidade;
}Ingrediente;

typedef struct{
    char nome[30];
    int ingredientes[7];
    int quantidades[7];
}Pocao;

Ingrediente ingredientes[] ={
    {"Pó de Fênix", 100},
    {"Essência Celestial", 50},
    {"Raiz de Dragão", 45},
    {"Orvalho Lunar", 30},
    {"Flores secas", 200},
    {"Elixir amargo", 20},
    {"Lágrimas de unicórnio", 15}
};

Pocao pocoes[] = {
    {"Poção de Cura", {0, 1, 4, 6}, {30, 20, 20, 10}},  
    {"Poção Força da Floresta", {3, 2, 4}, {20, 30, 30}},  
    {"Poção Sabedoria da Riqueza", {1, 0}, {30, 50}},  
    {"Poção Sorte no Amor", {3, 4, 6}, {10, 50, 5}},  
    {"Poção Malvada", {5, 2}, {10, 15}}  
};

void consultarIngredientes(int numIngredientes) {
    printf("\nIngredientes Disponíveis:\n");
    for (int i = 0; i < numIngredientes; i++) {
        printf("%d. %s: %d g/ml\n", i + 1, ingredientes[i].nome, ingredientes[i].quantidade);
    }
}

void prepararPocao(int numPoções, int numIngredientes) {
    int opcao;
    printf("\nEscolha uma poção para preparar:\n");
    for (int i = 0; i < numPoções; i++) {
        printf("%d. %s\n", i + 1, pocoes[i].nome);
    }

printf("Digite o número da poção: ");
    scanf("%d", &opcao);
    opcao--;  

    Pocao pocaoEscolhida = pocoes[opcao];

int ingredientesSuficientes = 1;
    printf("\nVerificando ingredientes...\n");
    for (int i = 0; i < 7; i++) {
        if (pocaoEscolhida.ingredientes[i] != -1) {
            int ingredienteIndex = pocaoEscolhida.ingredientes[i];
            int quantidadeNecessaria = pocaoEscolhida.quantidades[i];
            if (ingredientes[ingredienteIndex].quantidade < quantidadeNecessaria) {
                ingredientesSuficientes = 0;
                printf("Não há ingredientes suficientes para %s. Necessário %d, disponível %d\n",
                    ingredientes[ingredienteIndex].nome, quantidadeNecessaria,
                    ingredientes[ingredienteIndex].quantidade);
            }
        }
    }
     if (ingredientesSuficientes) {
        printf("Poção criada com sucesso!\n");
        printf("Estoque atualizado:\n");
        for (int i = 0; i < 7; i++) {
            if (pocaoEscolhida.ingredientes[i] != -1) {
                int ingredienteIndex = pocaoEscolhida.ingredientes[i];
                ingredientes[ingredienteIndex].quantidade -= pocaoEscolhida.quantidades[i];
                printf("%d. %s: %d g/ml\n", ingredienteIndex + 1,
                    ingredientes[ingredienteIndex].nome, ingredientes[ingredienteIndex].quantidade);
            }
        }
    }
}
void reabastecerIngrediente(int numIngredientes) {
    int opcao, quantidade;
    printf("\nEscolha um ingrediente para reabastecer:\n");
    for (int i = 0; i < numIngredientes; i++) {
        printf("%d. %s: %d g/ml\n", i + 1, ingredientes[i].nome, ingredientes[i].quantidade);
    }
    printf("Digite o número do ingrediente para reabastecer: ");
    scanf("%d", &opcao);
    opcao--;  

    printf("Digite a quantidade a ser adicionada: ");
    scanf("%d", &quantidade);

    ingredientes[opcao].quantidade += quantidade;
    printf("Ingrediente reabastecido com sucesso!\n");
    printf("Novo estoque de %s: %d g/ml\n", ingredientes[opcao].nome, ingredientes[opcao].quantidade);
}

int main() {
    int numIngredientes = sizeof(ingredientes) / sizeof(ingredientes[0]);
    int numPoções = sizeof(pocoes) / sizeof(pocoes[0]);

    int opcao;

    do {
        printf("\nMenu Principal:\n");
        printf("1. Consultar Ingredientes Disponíveis\n");
        printf("2. Preparar Poção\n");
        printf("3. Reabastecer Ingrediente\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            consultarIngredientes(numIngredientes);
        } else if (opcao == 2) {
            prepararPocao(numPoções, numIngredientes);
        } else if (opcao == 3) {
            reabastecerIngrediente(numIngredientes);
        } else if (opcao == 4) {
            printf("Saindo do programa...\n");
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}