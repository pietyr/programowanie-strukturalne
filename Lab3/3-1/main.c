#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define STATUS "student"
#define SREDNIA 5.0

int main() {
    setlocale(LC_ALL, "");

    char imie[20];
    char nazwisko[40];
    int wiek;
    char plec;

    system("@cls||clear");
    printf("Dane studenta\n");
    printf("Podaj swoje imię: ");
    scanf("%s", imie);

    system("@cls||clear");
    printf("Dane studenta\n");
    printf("Podaj swoje nazwisko: ");
    scanf("%s", nazwisko);

    system("@cls||clear");
    printf("Dane studenta\n");
    printf("Podaj swój wiek: ");
    scanf("%d", &wiek);

    do{
        system("@cls||clear");
        printf("Dane studenta\n");
        printf("Podaj swoją płeć (m/k): ");
        scanf(" %c", &plec);
    }while(plec != 'm' && plec != 'M' && plec != 'k' && plec != 'K');

    system("@cls||clear");
    printf("Dane studenta\n");
    if(plec == 'm' || plec == 'M'){
        printf("\n%s %s, %d lat, mężczyzna", imie, nazwisko, wiek);
    }
    if(plec == 'k' || plec == 'K'){
        printf("\n%s %s, %d lat, kobieta", imie, nazwisko, wiek);
    }
    printf("\nStatus: %s, Średnia: %0.2f\n", STATUS, SREDNIA);

    return 0;
}
