#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *alloc(int length)
{
    int *array = (int *)malloc(length * sizeof(int));

    if (array == NULL)
    {
        printf("Falha na alocacao de memoria \n");
        return NULL;
    }

    return array;
}

void scanSequences(int length, int *array)
{
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }
}

void printSequences(int length, int *array)
{
    printf("[ ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]\n");
}

void sseveSequences(int length, int *array)
{
    FILE *arq;

    arq = fopen("arquivoC.txt", "at");

    if (arq == NULL)
    {
        printf("\n Erro ao abrir o arquivo arquivoC.txt.");
        return;
    }

    for (int i = 0; i < length; i++)
    {
        fprintf(arq, "%d", array[i]);
    }
    fprintf(arq, "%s", "\n");

    fclose(arq);
}

/* void readSequences(int length, int *array)
{


    printf("\nConteudo do arquivo:\n");
    while ((ch = getc(arq)) != EOF)
        putchar(ch);
    printf("\n");

    for (int i = 0; i < length; i++)
    {
        int n = fgetc(arq);
        printf("%d", n);
        array[i] = n;
    }

    fclose(arq);
} */

void seveSequence(FILE *arq, int *array, int length)
{
    for (int i = 0; i < length; i++)
    {
        fprintf(arq, "%d ", array[i]);
    }
    fprintf(arq, "%s", "\n");
}

int readSequence(FILE *arq, int *array, int indexFile)
{
    if (arq == NULL || indexFile < 1)
    {
        printf("Numero de linha nao encontrado.\n");
        return -1;
    }

    int index = 0, currentIndexFile = 1;
    char linha[255];

    while (fgets(linha, sizeof(linha), arq) != NULL)
    {
        if (currentIndexFile == indexFile)
        {
            char *token = strtok(linha, " ");
            while (token != NULL)
            {
                array[index++] = atoi(token);
                token = strtok(NULL, " ");
            }
            return --index;
        }
        currentIndexFile++;
    }

    return -1;
}

int main()
{
    FILE *arq;

    arq = fopen("arquivoC.txt", "w");

    if (arq == NULL)
    {
        printf("\n Erro ao abrir o arquivo arquivoC.txt.");
        return 0;
    }

    int n;

    printf("Informe o tamanho das sequencias: ");
    scanf("%d", &n);

    int *sequences1 = alloc(n);

    printf("\nInforme os valores para a primeira sequencia:\n\n");
    scanSequences(n, sequences1);

    int *sequences2 = alloc(n);

    printf("\nInforme os valores para a segunda sequencia:\n\n");
    scanSequences(n, sequences2);

    printf("\nValores informados na primeira sequencia:\n\n");
    printSequences(n, sequences1);

    printf("\nValores informados na segunda sequencia:\n\n");
    printSequences(n, sequences2);

    seveSequence(arq, sequences1, n);
    seveSequence(arq, sequences2, n);

    free(sequences1);

    fclose(arq);

    int *sequenceR1 = alloc(n);

    FILE *arqR;

    arqR = fopen("arquivoC.txt", "r");

    if (arqR == NULL)
    {
        printf("\n Erro ao abrir o arquivo arquivoC.txt.");
        return 0;
    }

    int t = readSequence(arqR, sequenceR1, 1);
    printSequences(t, sequenceR1);

    free(sequenceR1);
    free(sequences2);

    fclose(arqR);
    return 0;
}