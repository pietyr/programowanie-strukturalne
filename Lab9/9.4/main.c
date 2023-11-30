#include <stdio.h>
#include <stdbool.h>

// Funkcja oblicza iloczyn liczb z przedziału <1,100> spośród n liczb podanych przez użytkownika.
// Funkcja zwraca iloczyn poprzez parametr wskaźnikowy a informację,
// czy były liczby spełniające warunek poprzez return.
bool oblicz_iloczyn(int ilosc_liczb, long *iloczyn);

int main() {
    long iloczyn;
    int ilosc_liczb;
    do{
        printf("Podaj ilość liczb do obliczenia iloczynu: ");
        scanf("%d", &ilosc_liczb);
    }while(ilosc_liczb <=0);
    bool czy_spelnily = oblicz_iloczyn(ilosc_liczb, &iloczyn);

    if(czy_spelnily){
        printf("Iloczyn = %ld\n", iloczyn);
    }else{
        printf("Nie podano liczb z zadanego przedziału.\n");
    }

    return 0;
}

bool oblicz_iloczyn(int ilosc_liczb, long *iloczyn){
    bool czy_liczby_z_przedzialu = false;

    *iloczyn = 1;
    for(int i = 1; i <= ilosc_liczb; i++){
        int liczba;
        printf("Podaj %d liczbę z przedziału <1,100>: ", i);
        scanf("%d", &liczba);
        if(liczba >= 1 && liczba <= 100){
            czy_liczby_z_przedzialu = true;
            *iloczyn *= liczba;
        }
    }
    return czy_liczby_z_przedzialu;
}