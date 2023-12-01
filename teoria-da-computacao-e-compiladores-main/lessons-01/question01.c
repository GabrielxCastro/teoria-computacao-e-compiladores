#include <stdio.h>

int main(void) {
    double n1, n2, n3, m;

    printf("\nInforme a primeira nota: ");
    scanf ("%lf", &n1);

    printf("\nInforme a segunda nota: ");
    scanf ("%lf", &n2);

    printf("\nInforme a terceira nota: ");
    scanf ("%lf", &n3);

    m = ((n1 + n2 + n3)/3);

    printf("\nA media das notas e: %.2f", m);
    return 0;
}