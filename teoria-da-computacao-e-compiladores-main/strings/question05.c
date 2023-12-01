#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    printf("Informe um caractere: ");
    scanf("%c", &c);

    if (isalnum(c))
    {
        printf("%c e uma letra ou um digito", c);
        return 1;
    }
    else
    {
        printf("%c nao e uma letra ou um digito", c);
        return 0;
    }
}