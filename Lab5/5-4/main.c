#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

bool czy_nalezy(float x, float y);

int main(){
    float x, y;

    setlocale(LC_ALL, "");

    printf("Podaj współrzędne punktu w postaci X.X,Y.Y (np. 0.5,-1.5): ");
    scanf("%f,%f", &x, &y);

    printf("Punkt %.1f , %.1f %snależy do zamalowanego obszaru.", x, y, czy_nalezy(x, y) ? "" : "nie ");
    return 0;
}

// Funkcja sprawdzająca, czy punkt należy do zamalowanego obszaru (kwadrat o wierzchołkach (-1,-1), (-1,1), (1,-1), (1,1))
bool czy_nalezy(float x, float y){
    return x <= 1.0 && x >= -1.0 && y <= 1.0 && y >= -1.0;
}
