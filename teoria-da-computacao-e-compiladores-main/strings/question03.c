#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    printf("Informe um caractere: ");
    scanf("%c", &c);

    if (isupper(c))
    {
        printf("%c e uma letra maiuscula", c);
        return 1;
    }
    else
    {
        printf("%c nao e uma letra maiuscula", c);
        return 0;
    }
}