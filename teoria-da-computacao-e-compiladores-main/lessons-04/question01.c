#include <stdio.h>

int length(FILE *file)
{
    int c = fgetc(file);

    if (c == EOF || c == '\n')
    {
        return 0;
    }

    return 1 + length(file);
}

void reverse(char *str, int start, int end)
{
    if (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        reverse(str, start + 1, end - 1);
    }
}

int main()
{
    printf("String: Hello, World!");

    FILE *arq = fopen("arq.txt", "r");

    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo arq.txt.\n");
        return 1;
    }

    int size = length(arq);
    printf("Tamanho da string calculado: %d\n", size);

    FILE *arqW = fopen("arq.txt", "a");

    if (arqW == NULL)
    {
        printf("Erro ao abrir o arquivo arq.txt.\n");
        return 1;
    }

    fprintf(arqW, "%s", "\n");
    fprintf(arqW, "%d", size);

    fseek(arq, 0, SEEK_SET);

    char str[size + 1];
    fgets(str, sizeof(str), arq);

    fclose(arq);

    reverse(str, 0, size - 1);

    printf("Reverso da string: %s\n", str);

    fprintf(arqW, "%s", "\n");
    fprintf(arqW, "%s", str);

    fclose(arqW);

    return 0;
}
