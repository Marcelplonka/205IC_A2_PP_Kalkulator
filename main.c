#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;

    char znak;

    float wynik;

    scanf("%d", &a);

    scanf("%c", &znak);

    scanf("%d", &b);

    switch (znak) {
        case '+':
            wynik = a + b;
            break;

        case '-':
            wynik = a - b;
            break;

        case '*':
            wynik = a * b;
            break;

        case '/':
            if (b != 0) {
                wynik = (float) a / b;

            } else {
                printf("Nie można dzielić przez zero!");
            }
            break;

        default:

            printf("Nieznane dzialanie!");
            break;

    }
    printf("Wynik dzialania: %.1f", wynik);

    return 0;
}