#include <stdio.h>
#include <stdlib.h>

typedef struct car
{
    char chassisNumber[18];
    char brand[255];
    char model[255];
    double price;
} tCar;

tCar *alloc(int n)
{
    tCar *array = (tCar *)calloc(n, sizeof(tCar));

    if (array == NULL)
    {
        printf("Falha na alocacao de memoria. \n");
        return NULL;
    }
    return array;
}

tCar *ralloc(int n, tCar *currentArray)
{
    tCar *array = (tCar *)realloc(currentArray, n * sizeof(tCar));

    if (array == NULL)
    {
        printf("Falha na realocacao de memoria. \n");
        return NULL;
    }
    return array;
}

void scanArray(int n, tCar *array)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nVeiculo %d:\n", i + 1);
        printf("Informe o numero do chassi: ");
        scanf("%s", array[i].chassisNumber);
        printf("Informe a marca: ");
        scanf("%s", array[i].brand);
        printf("Informe o modelo: ");
        scanf("%s", array[i].model);
        printf("Informe o preco: ");
        scanf("%lf", &array[i].price);
    }
}

void printArray(int n, tCar *array)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nVeiculo %d: \n", i + 1);
        printf("Numero do chassi: %s \nMarca: %s \nModelo: %s \nPreco: %.2f \n\n", array[i].chassisNumber, array[i].brand, array[i].model, array[i].price);
    }
}

int main()
{
    int n;

    printf("Informe o tamanho do array: ");
    scanf("%d", &n);

    tCar *cars = alloc(n);

    scanArray(n, cars);

    printArray(n, cars);

    printf("Informe o novo tamanho do array: ");
    scanf("%d", &n);

    cars = ralloc(n, cars);

    scanArray(n, cars);

    printArray(n, cars);

    free(cars);

    return 0;
}
