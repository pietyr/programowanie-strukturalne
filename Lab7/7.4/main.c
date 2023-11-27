#include <stdio.h>

// Zadanie 7.4 Lista płac

float oblicz_podwyzke(int liczba_pracownikow);

int main() {
    int liczba_pracownikow;
    printf("Podaj ilość pracowników: ");
    scanf("%d", &liczba_pracownikow);
    oblicz_podwyzke(liczba_pracownikow);
    return 0;
}

float oblicz_podwyzke(int liczba_pracownikow){
    float suma_nowych_plac = 0;
    float zarobki[liczba_pracownikow];

    for(int i = 0; i < liczba_pracownikow; i++){
        float placa;
        printf("Podaj płace %d pracownika: ", i + 1);
        scanf("%f", &placa);
        if(placa > 5000){
            placa *= 1.05;
        }else{
            placa *= 1.1;
        }
        zarobki[i] = placa;
        suma_nowych_plac += placa;
    }

    for(int i = 0; i < liczba_pracownikow; i++){
        printf("Nowa pensja pracownika %i = %.2f\n", i + 1, zarobki[i]);
    }

    return suma_nowych_plac;
}