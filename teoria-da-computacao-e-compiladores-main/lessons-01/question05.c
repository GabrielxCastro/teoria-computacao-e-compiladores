#include <stdio.h>

int main(void) {
    int largerDiagonal, minorDiagonal, area;

    printf("\nInforme o valor da diagonal maior do losango: ");
    scanf("%d", &largerDiagonal);

    printf("\nInforme o valor da diagonal menor do losango: ");
    scanf("%d", &minorDiagonal);

    area = ((largerDiagonal * minorDiagonal)/2);

    printf("\nA area do losango e: %d", area);
    return 0;
}