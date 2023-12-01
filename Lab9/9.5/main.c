#include <stdio.h>

// Część całkowita i ułamkowa liczby rzeczywistej

void dekompozycja(double liczba, int *czesc_calkowita, double *czesc_ulamkowa);

int main() {
    double liczba;
    double czesc_ulamkowa;
    int czesc_calkowita;

    for(int i = 0; i < 3; i++){
        printf("Podaj liczbę rzeczywistą: ");
        scanf("%lf", &liczba);
        dekompozycja(liczba, &czesc_calkowita, &czesc_ulamkowa);
        printf("Część całkowita: %d, Część ułamkowa: %lf\n", czesc_calkowita, czesc_ulamkowa);
    }
    return 0;
}

void dekompozycja(double liczba, int *czesc_calkowita, double *czesc_ulamkowa){
    *czesc_calkowita = (int)liczba;
    *czesc_ulamkowa = liczba - ((double)*czesc_calkowita);
}