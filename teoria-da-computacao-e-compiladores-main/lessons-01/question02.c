#include <stdio.h>

int main(void) {
    int birthYear, currentYear, currentAge, futureAge, year2050 = 2050;

    printf("\nQual o ano do seu nascimento: ");
    scanf("%d", &birthYear);

    printf("\nQual o ano atual: ");
    scanf("%d", &currentYear);

    currentAge = (currentYear - birthYear);
    printf("\nVoce tem %d anos em %d", currentAge, currentYear);

    futureAge = (year2050 - birthYear);
    printf("\n\nVoce tera %d anos em %d", futureAge, year2050);
    return 0;
}