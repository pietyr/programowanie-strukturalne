#include <stdio.h>

// Zadanie 7.3 - Średnia liczb parzystych

float licz_srednia_liczb_parzystych(int ilosc_liczb);

int main() {
    int ilosc_liczb;
    printf("Funkcja obliczaja średnią arytmetyczną parzystych liczb spośród n podanych liczb\n");
    printf("Podaj ilość liczb: ");
    scanf("%d", &ilosc_liczb);
    printf("Średnia liczb parzystych spośród podanych = %.2f\n", licz_srednia_liczb_parzystych(ilosc_liczb));
    return 0;
}

float licz_srednia_liczb_parzystych(int ilosc_liczb){
    int ilosc_parzystych = 0;
    float suma_parzystych = 0;
    for(int i = 1; i <= ilosc_liczb; i++){
        int liczba;
        printf("Podaj %d liczbę: ", i);
        scanf("%d", &liczba);
        if(liczba % 2 == 0){
            ilosc_parzystych++;
            suma_parzystych += liczba;
        }
    }

    if(ilosc_parzystych != 0){
        return suma_parzystych / ilosc_parzystych;
    }

    return suma_parzystych;
}