#include <stdio.h>

int main(void) {
    double basicSalary, employeeSalary, amountSalary;

    printf("\nInforme o valor do salario minimo: ");
    scanf("%lf", &basicSalary);

    printf("\nInforme o valor do salario do funcionario: ");
    scanf("%lf", &employeeSalary);

    amountSalary = (employeeSalary / basicSalary);

    printf("\nO funcionario recebe um valor equivalente a %.1f salario(s)", amountSalary);

    return 0;
}