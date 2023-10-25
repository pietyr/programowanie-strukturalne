#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");  // Dodanie polskich znaków

    int a, b;

    system("@cls||clear"); // Czyszczenie konsoli

    printf("Podaj pierwszą liczbę: ");
    scanf("%d", &a);
    printf("Podaj drugą liczbę: ");
    scanf("%d", &b);

    printf("Średnia arytmetyczna = %.2f\n", (float)(a+b)/2);
    printf("Średnia geometryczna = %.2f", sqrt((float)a * b));
    return 0;
}
