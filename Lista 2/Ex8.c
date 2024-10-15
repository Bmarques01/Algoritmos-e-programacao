#include <stdio.h>

int main ()
{
    float celsius, fahrenheit;

    printf("Qual é a temperatura em celcius?");
    scanf("%f",&celsius);

    fahrenheit = celsius * 1.8 + 32;

    printf("A temperatura em fahreinheit é %.2f",fahrenheit);

    return 0;
}