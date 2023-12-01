#include <stdio.h>

int main(void) {
    double salary, newSalary, increase = 1.25;

    printf("\nInforme seu salario: ");
    scanf("%lf", &salary);

    newSalary = (salary * increase);
    printf("\nO novo salario com aumento de 25%% e: %.2f", newSalary);
    return 0;
}