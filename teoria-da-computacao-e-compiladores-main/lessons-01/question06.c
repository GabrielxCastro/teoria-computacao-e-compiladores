#include <stdio.h>

int main(void) {
    double celsius, fahrenheit;

    printf("\nInforme a temperatura em graus celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = ((celsius * 1.8) + 32);

    printf("\nA temperatura em fahrenheit e: %.2f", fahrenheit);

    return 0;
}