#include <stdio.h>

int main(void) {
    double dollar, dollarValue, reaisValue;

    printf("\nInforme a cotacao do dolar em reais: ");
    scanf("%lf", &dollar);

    printf("\nInforme o valor que tem em dolar: ");
    scanf("%lf", &dollarValue);

    reaisValue = (dollar * dollarValue);

    printf("\n%.2f", reaisValue);

    return 0;
}