#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    printf("Informe um caractere: ");
    scanf("%c", &c);

    if (isalpha(c))
    {
        printf("%c e uma letra", c);
        return 1;
    }
    else
    {
        printf("%c nao e uma letra", c);
        return 0;
    }
}