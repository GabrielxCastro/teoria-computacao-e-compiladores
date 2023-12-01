#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    printf("Informe um caractere: ");
    scanf("%c", &c);

    if (isdigit(c))
    {
        printf("%c e um digito", c);
        return 1;
    }
    else
    {
        printf("%c nao e um digito", c);
        return 0;
    }
}