#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    printf("Informe um caractere: ");
    scanf("%c", &c);

    if (islower(c))
    {
        printf("%c e uma letra minuscula", c);
        return 1;
    }
    else
    {
        printf("%c nao e uma letra minuscula", c);
        return 0;
    }
}