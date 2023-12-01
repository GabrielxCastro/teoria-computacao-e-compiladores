#include <stdio.h>
#include <math.h>

int main(void) {
    double cathet1, cathet2, hypotenuse;

    printf("\nInforme o valor do primeiro cateto: ");
    scanf("%lf", &cathet1);

    printf("\nInforme o valor do segundo cateto: ");
    scanf("%lf", &cathet2);

    hypotenuse = (pow(cathet1, 2) + pow(cathet2, 2));

    printf("\nO valor da hipotenusa e: %.2f", sqrt(hypotenuse));

    return 0;
}