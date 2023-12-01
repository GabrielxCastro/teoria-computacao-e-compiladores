#include <stdio.h>
#include <math.h>

int main(void) {
    double radius, circumferential, area, volume, pi = 3.1415926535;

    printf("\nInforme o raio de uma esfera: ");
    scanf("%lf", &radius);

    circumferential = (2 * pi * radius);
    printf("\nA circunferencia da esfera e: %.2f", circumferential);

    area = (pi * pow(radius, 2));
    printf("\n\nA area da esfera e: %.2f", area);

    volume = ((4.0/3.0)* pi * pow(radius, 3));
    printf("\n\nO volume da esfera e: %.2f", volume);

    return 0;
}