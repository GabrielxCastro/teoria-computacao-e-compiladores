#include <stdio.h>

int main(void) {
    double weight, newWeight;

    printf("\nInforme seu peso em kg: ");
    scanf("%lf", &weight);

    newWeight = (weight * 1.15);

    printf("\nSe voce ganhar 15%% de peso, tera: %.2f Kg", newWeight);

    newWeight = (weight - (weight * 0.20));

    printf("\n\nSe voce perder 20%% de peso, tera: %.2f kg", newWeight);
    
    return 0;
}   