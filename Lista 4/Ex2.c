#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numeroSorteado, respostaUser;
    int tentativas = 3;

    
    srand(time(0));
    
    
    numeroSorteado = rand() % 10 + 1;

    printf("Adivinhe o número entre 1 e 10. Você tem %d tentativas.\n", tentativas);

    
    for (int i = 0; i < tentativas; i++) {
        printf("Tentativa %d: ", i + 1);
        scanf("%d", &respostaUser);

        
        if (respostaUser == numeroSorteado) {
            printf("Parabéns! Você adivinhou o número!\n");
            return 0;
        } else if (respostaUser < numeroSorteado) {
            printf("O número está acima do seu palpite.\n");
        } else {
            printf("O número está abaixo do seu palpite.\n");
        }
    }

    
    printf("Você não adivinhou o número. O número era: %d\n", numeroSorteado);

    return 0;
}