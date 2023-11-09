#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float licz_delte(float a, float b, float c);
void pierwiastki(float a, float b, float c);

int main() {
    float a, b, c;
    setlocale(LC_ALL, "");

    system("@cls||clear");
    printf("Obliczanie pierwiastków równania kwadratowego: Ax^2 + Bx + C\n");
    printf("Podaj wartość A: ");
    scanf("%f", &a);

    system("@cls||clear");
    printf("Obliczanie pierwiastków równania kwadratowego: %.2fx^2 + Bx + C\n", a);
    printf("Podaj wartość B: ");
    scanf("%f", &b);

    system("@cls||clear");
    printf("Obliczanie pierwiastków równania kwadratowego: %.2fx^2 + %.2fx + C\n", a, b);
    printf("Podaj wartość C: ");
    scanf("%f", &c);

    system("@cls||clear");
    printf("Dla funkcji o równaniu: %.2fx^2 + %.2fx + %.2f\n", a, b, c);
    pierwiastki(a, b, c);

    return 0;
}

float licz_delte(float a, float b, float c){
    return pow(b, 2) - (4 * a * c);
}

void pierwiastki(float a, float b, float c) {
    if(a == 0){
        if(b != 0){
            printf("Funkcja liniowa. Miejsce zerowe: x0 = %.2f\n", (-c)/b);
        }else{
            if(c == 0){
                printf("Funkcja stała. Rozwiązaniem jest każda liczba rzeczywista.\n");
            }else{
                printf("Brak rozwiąząń\n");
            }
        }
    }else{
        float delta = licz_delte(a, b, c);
        printf("Delta = %.2f", delta);
        if(delta < 0){
            printf("Delta < 0. Brak rozwiązań\n");
        }else if (delta == 0){
            printf("Delta == 0. Miejsce zerowe: x0 = %.2f\n", ((-b) / (2 * a)));
        }else{
            printf("Miejsca zerowe: x1 = %.2f ; x2 = %.2f\n", ((-b - sqrt(delta)) / (2 * a)), ((-b + sqrt(delta)) / (2 * a)));
        }
    }
}
