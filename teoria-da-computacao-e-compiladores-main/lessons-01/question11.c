#include <stdio.h>

int main(void) {
    int n, result;

    printf("\nInforme um numero para ver a tabuada: ");
    scanf("%d", &n);

    for (int i = 0; i <= 10; i++) {
        result = (n * i);
        printf("\n%d x %d = %d", n, i, result);
    }

    return 0;
}