#include <stdio.h>

// Zadanie 7.2 - Szlaczek

void szlaczek(char znak, int dlugosc_linii);

int main() {
    szlaczek('*', 50);
    szlaczek('-', 50);
    return 0;
}

void szlaczek(char znak, int dlugosc_linii){
    for(int i = 0; i < dlugosc_linii; i++){
        printf("%c", znak);
    }
    printf("\n");
}