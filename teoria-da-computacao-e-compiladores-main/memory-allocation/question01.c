#include <stdio.h>
#include <stdlib.h>

void alloc(int **array, int n)
{
    *array = (int *)malloc(n * sizeof(int));

    if (*array == NULL)
    {
        printf("Falha na alocação de memória. \n");
        return;
    }
}

void scanArray(int n, int array[n])
{
    for (int i = 0; i < n; i++)
    {
        array[i] = i * 10;
    }
}

void printArray(int n, int array[n])
{
    printf("Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}

int main()
{
    int *array, n;

    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    alloc(&array, n);

    scanArray(n, array);

    printArray(n, array);

    free(array);

    return 0;
}