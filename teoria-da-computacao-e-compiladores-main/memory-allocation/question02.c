#include <stdio.h>
#include <stdlib.h>

typedef struct person
{
    char cpf[12];
    char name[255];
    double salary;
} tPerson;

tPerson *alloc(int n)
{
    tPerson *array = (tPerson *)calloc(n, sizeof(tPerson));

    if (array == NULL)
    {
        printf("Falha na alocação de memória. \n");
        return NULL;
    }
    return array;
}

void scanArray(int n, tPerson *array)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nPessoa %d:\n", i + 1);
        printf("Informe o CPF: ");
        scanf("%s", array[i].cpf);
        printf("Informe o nome: ");
        scanf("%s", array[i].name);
        printf("Informe o salario: ");
        scanf("%lf", &array[i].salary);
    }
}

void printArray(int n, tPerson *array)
{
    for (int i = 0; i < n; i++)
    {
        printf("Pessoa %d: \n", i + 1);
        printf("CPF: %s \nNome: %s \nSalario: %.2f \n\n", array[i].cpf, array[i].name, array[i].salary);
    }
}

int main()
{
    int n;

    printf("Informe o tamanho do array: ");
    scanf("%d", &n);

    tPerson *persons = alloc(n);

    scanArray(n, persons);

    printArray(n, persons);

    free(persons);

    return 0;
}