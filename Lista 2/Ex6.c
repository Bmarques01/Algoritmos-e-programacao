#include <stdio.h>

int main()
{
    float smartphones, tablets, total;

    printf("Quantos smartphones foram vendidos?");
    scanf("%f",&smartphones);

    printf("Quantos tablets foram vendidos?");
    scanf("%f",&tablets);

    total = smartphones * 1000.00 + tablets * 1500.00;

    printf("O valor total é %.2f",total);
    return 0;
}