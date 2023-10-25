#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float odleglosc_miedzy_punktami(int x1, int y1, int x2, int y2);

int main()
{
    setlocale(LC_ALL, "");  // Dodanie polskich znaków

    int x1, x2, y1, y2;

    printf("Podaj współrzędne środka okręgu w postaci x,y: ");
    scanf("%d,%d", &x1, &y1);
    printf("Podaj współrzędne punktu przez który przechodzi obwód okręgu w postaci x,y: ");
    scanf("%d,%d", &x2, &y2);

    float promien = odleglosc_miedzy_punktami(x1, y1, x2, y2);
    printf("Odległość pomiędzy punktami (promień) wynosi: %.1f\n", promien);
    printf("Obwód okręgu jest równy %.2f", 2 * M_PI * promien);

    return 0;
}

float odleglosc_miedzy_punktami(int x1, int y1, int x2, int y2){
    return sqrt(pow(((float)x2 - x1), 2) + pow(((float)y2 - y1), 2));
}
