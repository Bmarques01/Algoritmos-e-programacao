#include <stdio.h>

int main()
{
    int passaros, total;

    printf("Quantos passáros o criador possui?");
    scanf("%d",&passaros);

    total = passaros * 30;

    printf("A quantidade total de ração é %d gramas",total);

    return 0;
}