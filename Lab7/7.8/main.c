#include <stdio.h>
#include <stdbool.h>

// Zadanie 7.8 - Liczby trzycyfrowe, które są sumą sześcianów swoich liczb

bool czy_suma_szescianow_cyfr(int liczba);
void wyznacz_liczby_ktore_sa_suma_szescianow_swoich_liczb(int min_zakres, int max_zakres);

int main() {
    wyznacz_liczby_ktore_sa_suma_szescianow_swoich_liczb(100, 999);
    return 0;
}

bool czy_suma_szescianow_cyfr(int liczba){

    long suma_szescianow = 0;
    int pozostala_wartosc = liczba;

    while(pozostala_wartosc != 0){
        int cyfra = pozostala_wartosc % 10;
        suma_szescianow += ((long)cyfra * cyfra * cyfra);
        pozostala_wartosc /= 10;
    }

    return (long) liczba == suma_szescianow;
}

void wyznacz_liczby_ktore_sa_suma_szescianow_swoich_liczb(int min_zakres, int max_zakres){
    for(int liczba = min_zakres; liczba <= max_zakres; liczba++){
        if(czy_suma_szescianow_cyfr(liczba)){
            printf("%d\n", liczba);
        }
    }
}